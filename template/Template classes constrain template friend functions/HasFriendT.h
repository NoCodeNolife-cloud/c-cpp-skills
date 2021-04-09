#pragma once
#include <iostream>
using namespace std;

template<typename T>void counts();
template<typename T>void report(T&);

template<typename TT>
class HasFriendT {
private:
	TT item;
	static int ct;
public:
	HasFriendT(const TT& i) :item(i) {
		ct++;
		return;
	}
	~HasFriendT() {
		ct--;
		return;
	}
	friend void counts<TT>();
	friend void report<>(HasFriendT<TT>&);
};

template<typename T>
int HasFriendT<T>::ct = 0;

template<typename T>
void counts() {
	cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
	cout << "template counts(): " << HasFriendT<T>::ct << endl;
	return;
}

template<typename T>
void report(T& hf) {
	cout << hf.item << endl;
	return;
}
