#pragma once
class data {
public:
	int a = 1;
	mutable int b = 1;//����dataΪconst,��ԱbҲ�ɸ�ֵ
};
void show(data para_data);