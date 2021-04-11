#include <iostream>
#include "function.h"

using namespace std;

void showClock() {
	int second = -1, minute = -1, hour = -1, delay;
	cout << "请输入24小时制的起始时间(时:分:秒):";
	cin >> hour >> minute >> second;
	while (true) {
		for (; second <= 60; second++) {
			for (delay = 0; delay <= 220000000; delay++) {
				continue;
			}
			if (second == 60) {
				minute++;
				second = 0;
			}
			if (minute == 60) {
				hour++;
				minute = 0;
			}
			if (hour == 24) {
				hour = 0;
			}
			cout << "现在时间: " << hour << " : " << minute << " : " << second << "\r";
		}
	}
	system("pause");
}