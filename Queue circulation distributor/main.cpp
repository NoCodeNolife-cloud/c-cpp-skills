#include <iostream>
#include <queue>

using namespace std;

/// 循环处理
void roundRobin();

/// 触发循环退出条件
bool serviceClosed();

/// 处理循环变量
void service(int e);

int main() {
    roundRobin();
    return 0;
}

void roundRobin() {
    queue<int> Q;/*循环变量*/
    for (int i = 0; i < 10; ++i) {
        Q.push(i);
    }
    while (serviceClosed()) {
        int e = Q.front();
        Q.pop();
        service(e);
        Q.push(e);
    }
}

bool serviceClosed() {
    static int times = 0;
    times++;
    return (times < 100) ? true : false;
}

void service(int e) {
    cout << e << endl;
}
