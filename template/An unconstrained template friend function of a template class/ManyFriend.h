#pragma once
#include "Function.h"

template<typename T>
class ManyFriend {
private:
	T item;

public:
	ManyFriend(const T& i) :item(i) {
		return;
	}

	template<typename C, typename D>
	friend void show2(C&, D&);
};