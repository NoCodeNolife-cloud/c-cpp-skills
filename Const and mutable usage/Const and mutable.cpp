/*
mutable可以指出,即使结构(或类)变量为const,其某个成员也可以被修改
*/
#include <iostream>
#include "head.h"
void main() {
	const data c_data;
	//c_data.a = 5;
	//成员a不能赋值
	c_data.b = 10;//mutable可以赋值
	show(c_data);
	return;
}