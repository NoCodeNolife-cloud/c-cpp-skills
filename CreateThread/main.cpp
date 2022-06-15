// 为了节省执行时间而添加并行,把问题划分为几个小问题,并分配给几个线程(分而治之)。
// 把问题划分成若干更小的单元,更容易在实现中创建并行逻辑。同时,在并行中使用系统资源能优化应用程序并提高其运行速度。
#include <Windows.h>
#include <iostream>
#include <tchar.h>

using namespace std;

#define THREADS_NUMBER        2
#define ELEMENTS_NUMBER        200
#define BLOCK_SIZE            ELEMENTS_NUMBER / THREADS_NUMBER
#define MAX_VALUE            1000

typedef struct _tagARRAYOBJECT {
    int *iArray;
    int iSize;
    int iThreadID;
} ARRAYOBJECT, *PARRAYOBJECT;

DWORD WINAPI ThreadStart(LPVOID lpParameter);

void PrintArray(int *iArray, int iSize);

void MergeArrays(int *leftArray, int leftArrayLenght, int *rightArray, int rightArrayLenght,
                 int *mergedArray);

int _tmain(int argc, TCHAR *argv[]) {
    int iArray1[BLOCK_SIZE];
    int iArray2[BLOCK_SIZE];
    int iArray[ELEMENTS_NUMBER];
    for (int iIndex = 0; iIndex < BLOCK_SIZE; iIndex++) {
        iArray1[iIndex] = rand() % MAX_VALUE;
        iArray2[iIndex] = rand() % MAX_VALUE;
    }

    HANDLE hThreads[THREADS_NUMBER];
    ARRAYOBJECT pObject1 = {&(iArray1[0]), BLOCK_SIZE, 0};
    // 如前所述,每个应用程序都有一个主线程。使用CreateThread Win32 API创建其他线程:
    hThreads[0] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) ThreadStart, (LPVOID) &pObject1, 0,
                               NULL);

    ARRAYOBJECT pObject2 = {&(iArray2[0]), BLOCK_SIZE, 1};
    hThreads[1] = CreateThread(NULL, 0, (LPTHREAD_START_ROUTINE) ThreadStart, (LPVOID) &pObject2, 0,
                               NULL);

    cout << "Waiting execution..." << endl;
    WaitForMultipleObjects(THREADS_NUMBER, hThreads, TRUE, INFINITE);

    MergeArrays(&iArray1[0], BLOCK_SIZE, &iArray2[0], BLOCK_SIZE, &iArray[0]);
    PrintArray(iArray, ELEMENTS_NUMBER);

    CloseHandle(hThreads[0]);
    CloseHandle(hThreads[1]);

    cout << "Array sorted..." << endl;
    return 0;
}

// 设置线程的开始地址(lpStartAddress)和设置传给线程例程的值(lpParameter)很重要。lpParameter是一个预定义例程(函数)指针:
// typedef DWORD ( WINAPI *PTHREAD_START_ROUTINE )( LPVOID lpThreadParameter );
DWORD WINAPI ThreadStart(LPVOID lpParameter) {
    PARRAYOBJECT pObject = (PARRAYOBJECT) lpParameter;
    int iTmp = 0;
    for (int iIndex = 0; iIndex < pObject->iSize; iIndex++) {
        for (int iEndIndex = pObject->iSize - 1; iEndIndex > iIndex; iEndIndex--) {
            if (pObject->iArray[iEndIndex] < pObject->iArray[iIndex]) {
                iTmp = pObject->iArray[iEndIndex];
                pObject->iArray[iEndIndex] = pObject->iArray[iIndex];
                pObject->iArray[iIndex] = iTmp;
            }
        }
    }
    return 0;
}

void PrintArray(int *iArray, int iSize) {
    for (int iIndex = 0; iIndex < iSize; iIndex++) {
        cout << " " << iArray[iIndex];
    }
    cout << endl;
}

void MergeArrays(int *leftArray, int leftArrayLenght, int *rightArray, int rightArrayLenght,
                 int *mergedArray) {
    int i = 0;
    int j = 0;
    int k = 0;
    while (i < leftArrayLenght && j < rightArrayLenght) {
        if (leftArray[i] < rightArray[j]) {
            mergedArray[k] = leftArray[i];
            i++;
        } else {
            mergedArray[k] = rightArray[j];
            j++;
        }
        k++;
    }
    if (i >= leftArrayLenght) {
        while (j < rightArrayLenght) {
            mergedArray[k] = rightArray[j];
            j++;
            k++;
        }
    }
    if (j >= rightArrayLenght) {
        while (i < leftArrayLenght) {
            mergedArray[k] = leftArray[i];
            i++;
            k++;
        }
    }
}