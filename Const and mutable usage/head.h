#pragma once
class data {
public:
	int a = 1;
	mutable int b = 1;//即便data为const,成员b也可赋值
};
void show(data para_data);