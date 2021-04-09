#include "function.h"

void WriteRandowFile()
{
	Record records[3] = { "01-����","02-����","03-����" };
	ofstream myFile("data.txt", ios::out | ios::binary);
	if (!myFile.is_open()) {
		cout << "���ļ�����" << endl;
		return;
	}
	for (int i = 0; i < 3; i++) {
		myFile.write((const char*)&records[i], sizeof Record);
	}
	myFile.close();
	cout << "��data.txt�ļ���д����������." << endl;
	return;
}

void ReadRandomFile()
{
	ifstream myFile("data.txt", ios::in | ios::binary);
	if (!myFile.is_open()) {
		cout << "���ļ�����" << endl;
		return;
	}
	cout << "��ȡdata.txt�ļ��ĵڶ�������������ʾ:" << endl;
	Record record;
	myFile.seekg(sizeof(Record), ios::beg);
	myFile.read((char*)&record, sizeof Record);
	cout << (char*)&record << endl;
	myFile.close();
	return;
}