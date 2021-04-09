#include "head.h"

void WriteOrderFile()
{
	fstream myFile;
	myFile.open("data.txt", ios::out);
	if (!myFile)
	{
		cout << "打开文件错误" << endl;
		return;
	}
	myFile << "01--张三" << endl << "02--李四" << endl;
	myFile.close();
	cout << "向data.txt文件写入两条数据。" << endl;
	return;
}

void ReadOrderFile()
{
	fstream myFile;
	myFile.open("data.txt", ios::in);
	if (!myFile)
	{
		cout << "打开文件错误" << endl;
		return;
	}
	cout << "读取data.txt文件内容如下所示:" << endl;
	string value;
	while (myFile >> value)
	{
		cout << value << endl;
	}
	myFile.close();
	return;
}