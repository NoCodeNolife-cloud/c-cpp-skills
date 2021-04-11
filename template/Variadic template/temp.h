#pragma once
#include <iostream>

using namespace std;

class Temp {
public:
	void function();

	template <class T, class ...Args>
	void function(T parat, Args... rest);
};

template<class T, class ...Args>
inline void Temp::function(T parat, Args ...rest)
{
	cout << "parameter " << parat << endl;
	function(rest...);
	return;
}