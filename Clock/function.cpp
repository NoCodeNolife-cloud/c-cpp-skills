#include <iostream>
#include "function.h"

using namespace std;

void showClock() {
	int second = -1, minute = -1, hour = -1, delay;
	cout << "������24Сʱ�Ƶ���ʼʱ��(ʱ:��:��):";
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
			cout << "����ʱ��: " << hour << " : " << minute << " : " << second << "\r";
		}
	}
	system("pause");
}