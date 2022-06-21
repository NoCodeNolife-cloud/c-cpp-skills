#include <iostream>
#include <mutex>
#include <windows.h>

DWORD func(LPVOID para) {
    HANDLE mutex = OpenMutex(MUTEX_ALL_ACCESS, false, "mute");
    if (mutex == nullptr) {
        mutex = CreateMutex(nullptr, false, "mute");
    }
    WaitForSingleObject(mutex, INFINITE);

    for (int i = 0; i < 100; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    ReleaseMutex(mutex);
    return 0;
}

int main() {
    HANDLE thread = CreateThread(nullptr, 0, func, nullptr, 0, nullptr);
    HANDLE thread1 = CreateThread(nullptr, 0, func, nullptr, 0, nullptr);
    WaitForSingleObject(thread, INFINITE);
    WaitForSingleObject(thread1, INFINITE);
    return EXIT_SUCCESS;
}