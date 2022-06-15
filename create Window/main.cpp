// 大多数API都需要windows.h头文件才能处理一些视觉特性,如窗口、控件、枚举和样式。
#include <windows.h>

//! 声明一个窗口过程的原型,之后在窗口结构中使用它
//! \param hWnd
//! \param uMsg
//! \param wParam
//! \param lParam
//! \return
LRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    消息代码负责处理消息
    switch (uMsg) {
//        默认消息(该例中是WM_CLOSE),即正在关闭应用程序时系统发送的消息。
        case WM_CLOSE: {
//            然后,调用PostQuitMessage API 释放系统资源,并安全关闭该应用程序。
            PostQuitMessage(0);
            break;
        }
        default: {
//            最后,调用默认窗口过程(DefWindowProc)处理应用程序未处理的窗口消息。该函数确保每个消息都被处理,如下所示:
            return DefWindowProc(hWnd, uMsg, wParam, lParam);
        }
    }
    return 0;
}

//! 应用程序入口点。Win32应用程序和控制台应用程序的main函数原型稍有不同,如下代码所示:
//! \param hThis 应用程序当前实例的句柄。
//! \param hPrev 应用程序上一个实例的句柄，一定是NULL
//! \param szCmdLine 应用程序命令行
//! \param iCmdShow 控制如何显示窗口
//! \return 注意,在返回类型(int)后面有一个WINAPI宏,它表示一种调用约定(calling convention)
int WINAPI WinMain(HINSTANCE hThis, HINSTANCE hPrev, LPSTR szCmdLine, int iCmdShow) {
//    在WinMain的函数体中,用UNREFERENCED_RARAMETER宏告诉编译器不使用某些参数,方便编译器进行一些额外的优化
    UNREFERENCED_PARAMETER(hPrev);
    UNREFERENCED_PARAMETER(szCmdLine);
//    然后,实例化WNDCLASSEX窗口结构。该对象中储存了待生成窗口的细节,如栈大小、当前应用程序实例的句柄、
//    窗口样式、窗口颜色、图标和鼠标指针。
    WNDCLASSEX wndEx = {0};
//    下面的代码定义了在实例化窗口类后分配的额外字节数:
    wndEx.cbClsExtra = 0;
//    下面的代码定义了窗口结构的大小(以字节为单位):
    wndEx.cbSize = sizeof(wndEx);
//    下面的代码定义了实例化窗口实例后分配的额外字节数:
    wndEx.cbWndExtra = 0;
//    下面的代码定义了窗口类背景画刷的句柄:
    wndEx.hbrBackground = (HBRUSH) (COLOR_WINDOW + 1);
//    下面的代码定义了窗口类光标的句柄;
    wndEx.hCursor = LoadCursor(nullptr, IDC_ARROW);
//    下面的代码定义了窗口类图标的句柄;
    wndEx.hIcon = LoadIcon(nullptr, IDI_APPLICATION);
    wndEx.hIconSm = LoadIcon(nullptr, IDI_APPLICATION);
//    下面的代码定义了包含窗口过程的实例句柄:
    wndEx.hInstance = hThis;
//    下面的代码定义了指向窗口过程的指针:
    wndEx.lpfnWndProc = WndProc;
//    下面的代码定义了指向以空字符结尾的字符串或原子的指针:
    wndEx.lpszClassName = TEXT("GUIProject");
//    下面的代码定义了指向以空字符结尾的字符串的指针,该字符串指定了窗口类菜单的资源名:
    wndEx.lpszMenuName = nullptr;
//    下面的代码定义了窗口类的样式:
    wndEx.style = CS_HREDRAW | CS_VREDRAW;
//    下面的代码注册一个窗口类,供CreateWindow或CreateWindowEx函数稍后使用:
    if (!RegisterClassEx(&wndEx)) {
        return -1;
    }
//    CreateWindow API创建一个重叠、弹出的窗口或子窗口。
//    它指定该窗口类、窗口标题、窗口样式、窗口的初始位置和大小(可选的)。
//    该函数还指定了窗口的父窗口或所有者(如果有的话),以及窗口的菜单。
    HWND hWnd = CreateWindow(wndEx.lpszClassName, TEXT("GUI Porject"), WS_OVERLAPPEDWINDOW, 200,
                             200, 400, 300, HWND_DESKTOP, nullptr, hThis, 0);
    if (!hWnd) {
        return -1;
    }
//    如果指定窗口的更新域未被填满, UpdateWindow函数就向窗口发送一条WM_PAINT消息,更新指定窗口的客户区。
//    该函数绕过应用程序的消息队列,向指定窗口的窗口过程直接发送一条WM_PAINT消息。
    UpdateWindow(hWnd);
//    下面的代码设置指定窗口的显示状态:
    ShowWindow(hWnd, iCmdShow);
//    我们还需要一个MSG结构的实例来表示窗口消息。
    MSG msg = {nullptr};
//    接下来,进入一个消息循环。Windows中的应用程序是事件驱动的,它们不会显式调用函数(如,C运行时库调用)来获得输入,
//    而是等待系统把输入传递给它们。系统把所有的输入传递给应用程序的不同窗口。每个窗口都有一个叫做窗口过程的函数,
//    当有输入需要传递给窗口时,系统调用会调用该函数。窗口过程处理输入,并把控制权返回系统。
//    GetMessage API从主调线程的消息队列中检索信息,如下代码所示:
    while (GetMessage(&msg, nullptr, NULL, NULL)) {
//        将虚拟键消息翻译成字符消息
        TranslateMessage(&msg);
//        分发一条消息给窗口过程
        DispatchMessage(&msg);
    }
//    当关闭应用程序或发送一些触发其退出的命令时,系统会释放应用程序消息队列。这意味着该应用程序不会再有消息,
//    而且while 循环也将结束。
//    DestroyWindow API销毁指定的窗口。该函数向指定窗口发送WM_DESTROY 和WM_NCDESTROY 消息,
//    使窗口无效并移除其键盘焦点(keyboard focus)。此外,该函数还将销毁指定窗口的菜单,清空线程的消息队列,
//    销毁与窗口过程相关的计时器,解除窗口对剪切板的所有权,如果该窗口在查看器链的顶端,还将打断剪切板的查看器链。
    DestroyWindow(hWnd);
//    下面的函数注销窗口类,释放该类占用的内存:
    UnregisterClass(wndEx.lpszClassName, hThis);
//    下面的return函数从应用程序消息队列中返回一个成功退出代码或最后一个消息代码,如下代码所示:
    return (int) msg.wParam;
}