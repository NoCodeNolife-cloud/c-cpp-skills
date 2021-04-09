#include "head.h"

/**
 * @brief 使用输入输出流成员函数
*/
void ioTest() {
	char x;/*定义存放输入字符的变量*/
	while (cin.get(x)) {/*循环接收输入的字符*/
		if (x == 'q') {/*如果输入的是q字符，则退出程序*/
			return;
		}
		if ((x > 'A') and (x < 'Z')) {/*如果输入的是大写字母，则在屏幕回显输入的字符*/
			cout.put(x);
		}
	}
	return;
}