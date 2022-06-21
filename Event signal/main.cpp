#include <windows.h>
#include <iostream>
#include <tchar.h>

HANDLE hEvent;
int num = 1;

DWORD WINAPI _threadProc(LPVOID lpParam) {
for (int i = 0; i < 10000; i++) {
for (int j = 0; j < 10000; j++);
}

num = 10;
SetEvent(hEvent);
return 0;
}

int main() {
    //手动复位，初始时无信号
    hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
    if (hEvent == NULL) {
        printf("hEvent is null\n");
        return 0;
    }

    HANDLE hThread = CreateThread(NULL, 0, _threadProc, NULL, 0, NULL);

    DWORD dwRet = WaitForSingleObject(hEvent, INFINITE);
    if (dwRet == WAIT_ABANDONED)
        printf("WAIT_ABANDONED\n");
    else if (dwRet == WAIT_TIMEOUT)
        printf("WAIT_TIMEOUT\n");
    else if (dwRet == WAIT_OBJECT_0)
        printf("有信号状态\n");
    else if (dwRet == WAIT_FAILED)
        printf("WAIT_FAILED\n");

    printf("sub thread run out, num is %d\n", num);
}