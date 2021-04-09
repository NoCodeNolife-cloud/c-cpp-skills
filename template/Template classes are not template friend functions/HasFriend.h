#pragma once
#include <iostream>
using namespace std;

template<typename T>
class HasFriend
{
private:
	T item;
	static int ct;
public:
	HasFriend(const T& i) :item(i) {
		ct++;
	}
	~HasFriend() {
		ct--;
	}
	friend void counts();
	friend void reports(HasFriend<T>&);
};

template<typename T>
int HasFriend<T>::ct = 0;

void counts() {
	cout << "int count: " << HasFriend<int>::ct << "; ";
	cout << "double count : " << HasFriend<double>::ct << endl;
	return;
}

void reports(HasFriend<int>& hf) {
	cout << "HasFriend<int>: " << hf.item << endl;
	return;
}

void reports(HasFriend<double>& hf) {
	cout << "HasFriend<double>: " << hf.item << endl;
	return;
}
