#include <iostream>
#include <ctime>

using namespace std;

int main () {
	time_t now = time ( 0 );// 基于当前系统的当前日期/时间
	char* dt = ctime ( &now );// 把 now 转换为字符串形式
	cout << "本地日期和时间：" << dt << endl;
	system ( "pause" );
}