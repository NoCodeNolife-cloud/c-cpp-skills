#include <tchar.h>
#include <iostream>
// Winternl.h和windows.ho winternl.h头文件包含了大部分Windows内部函数的原型和数据表示
#include <windows.h>
#include <winternl.h>

// 结合 PROCESSINFOCLASS:: ProcessBasicInformation 枚举,通过 UniqueProcessId 特征获取进程标识符
typedef NTSTATUS(NTAPI
*QEURYINFORMATIONPROCESS)(
IN HANDLE
ProcessHandle,
IN PROCESSINFOCLASS
ProcessInformationClass,
OUT PVOID
ProcessInformation,
IN ULONG
ProcessInformationLength,
OUT PULONG
ReturnLength OPTIONAL
);

int _tmain(int argc, _TCHAR *argv[]) {
    STARTUPINFO startupInfo = {0};
    PROCESS_INFORMATION processInformation = {0};
    BOOL bSuccess = CreateProcess(TEXT("C:\\Windows\\notepad.exe"), nullptr, nullptr, nullptr,
                                  FALSE, NULL, nullptr, nullptr, &startupInfo, &processInformation);
    if (bSuccess) {
        std::cout << "Process started." << std::endl;
        std::cout << "Process ID:\t" << processInformation.dwProcessId << std::endl;
        PROCESS_BASIC_INFORMATION pbi;
        ULONG uLength = 0;
        // 加载library     .dll
        HMODULE hDll = LoadLibrary(TEXT("C:\\Windows\\System32\\ntdll.dll"));
        if (hDll) {
            // 首先,定义QEURYINFORMATIONPROCESS,这是从ntdll.dl1中加载的NtQueryInformationProcess函数的别名。
            // 当通过 GetProcAddress Win32 API获得该函数的地址时,就可以询问PROCESS BASIC_INFORMATION 对象了。
            // 动态加载dll里面的函数:
            QEURYINFORMATIONPROCESS QueryInformationProcess = (QEURYINFORMATIONPROCESS) GetProcAddress(
                    hDll, "NtQueryInformationProcess");
            if (QueryInformationProcess) {
                // 使用dll函数
                NTSTATUS ntStatus = QueryInformationProcess(processInformation.hProcess,
                                                            PROCESSINFOCLASS::ProcessBasicInformation,
                                                            &pbi, sizeof(pbi), &uLength);
                if (NT_SUCCESS(ntStatus)) {
                    std::cout << "Process ID (from PCB):\t" << pbi.UniqueProcessId << std::endl;
                } else {
                    std::cout << "Cannot open PCB!" << std::endl;
                    std::cout << "Error code:\t" << GetLastError() << std::endl;
                }
            }
        } else {
            std::cout << "Cannot load ntdll.dll!" << std::endl;
            std::cout << "Error code:\t" << GetLastError() << std::endl;
        }
    } else {
        std::cout << "Cannot start process!" << std::endl;
        std::cout << "Error code:\t" << GetLastError() << std::endl;
    }
}