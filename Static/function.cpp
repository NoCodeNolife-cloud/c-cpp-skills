#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <algorithm>
#include <fstream>
#include <thread>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <unordered_map>
#include <set>
#include <iostream>
#include <random>
#include <time.h>
#include <iomanip>
#include <stdio.h>
#include <Windows.h>
using namespace std;
/*-------------------------------------------------*/
void strcount(const char* str) {
	using namespace std;
	static int total = 0;//��̬����
	int count = 0;
	cout << "\""
		<< str
		<< "\" contains ";
	while (*str++) {
		count++;
	}//��������
	total += count;//��̬�����ۼ�
	cout << count
		<< " characters"
		<< endl
		<< total
		<< " characters total"
		<< endl;//������
	return;
}