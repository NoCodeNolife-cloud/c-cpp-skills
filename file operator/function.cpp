#include "head.h"

void WriteOrderFile()
{
	fstream myFile;
	myFile.open("data.txt", ios::out);
	if (!myFile)
	{
		cout << "���ļ�����" << endl;
		return;
	}
	myFile << "01--����" << endl << "02--����" << endl;
	myFile.close();
	cout << "��data.txt�ļ�д���������ݡ�" << endl;
	return;
}

void ReadOrderFile()
{
	fstream myFile;
	myFile.open("data.txt", ios::in);
	if (!myFile)
	{
		cout << "���ļ�����" << endl;
		return;
	}
	cout << "��ȡdata.txt�ļ�����������ʾ:" << endl;
	string value;
	while (myFile >> value)
	{
		cout << value << endl;
	}
	myFile.close();
	return;
}