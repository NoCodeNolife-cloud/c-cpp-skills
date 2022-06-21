#include <iostream>
#include <windows.h>
#include <tchar.h>

DWORD WINAPI func(LPVOID ptr) {
    HANDLE sem = OpenSemaphore(SEMAPHORE_ALL_ACCESS, false, "meni");
    if (sem == nullptr) {
        sem = CreateSemaphore(nullptr, 1, 1, "meni");
    }
    WaitForSingleObject(sem, INFINITE);

    std::cout << "{";
    Sleep(1000);
    std::cout << "}";

    ReleaseSemaphore(sem, 1, nullptr);
    return 0;
}

int main() {
    HANDLE thread = CreateThread(nullptr, 0, func, nullptr, NULL, nullptr);
    HANDLE thread1 = CreateThread(nullptr, 0, func, nullptr, NULL, nullptr);
    HANDLE thread2 = CreateThread(nullptr, 0, func, nullptr, NULL, nullptr);
    HANDLE thread3 = CreateThread(nullptr, 0, func, nullptr, NULL, nullptr);
    WaitForSingleObject(thread, INFINITE);
    WaitForSingleObject(thread1, INFINITE);
    WaitForSingleObject(thread2, INFINITE);
    WaitForSingleObject(thread3, INFINITE);
    return 0;
}
