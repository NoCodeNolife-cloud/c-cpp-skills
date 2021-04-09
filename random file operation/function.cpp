#include "function.h"

void WriteRandowFile()
{
	Record records[3] = { "01-张三","02-李四","03-王五" };
	ofstream myFile("data.txt", ios::out | ios::binary);
	if (!myFile.is_open()) {
		cout << "打开文件错误" << endl;
		return;
	}
	for (int i = 0; i < 3; i++) {
		myFile.write((const char*)&records[i], sizeof Record);
	}
	myFile.close();
	cout << "向data.txt文件中写入三条数据." << endl;
	return;
}

void ReadRandomFile()
{
	ifstream myFile("data.txt", ios::in | ios::binary);
	if (!myFile.is_open()) {
		cout << "打开文件错误" << endl;
		return;
	}
	cout << "读取data.txt文件的第二条内容如下所示:" << endl;
	Record record;
	myFile.seekg(sizeof(Record), ios::beg);
	myFile.read((char*)&record, sizeof Record);
	cout << (char*)&record << endl;
	myFile.close();
	return;
}