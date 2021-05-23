#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<class T>
inline void PRINT_ELEMENTS ( const T& coll , const char* optcstr = "" ) {
	typename T::const_iterator pos;
	std::cout << optcstr;
	for ( pos = coll.begin (); pos != coll.end (); ++pos ) {
		std::cout << *pos << " ";
	}
	std::cout << std::endl;
}

template<class T>
inline void INSERT_ELEMENTS ( T& coll , int first , int last ) {
	for ( int i = first; i <= last; ++i ) {
		coll.insert ( coll.end () , i );
	}
}

int main () {
	// 声明vector
	vector<int>coll;

	// 初始化vector
	INSERT_ELEMENTS ( coll , 3 , 7 );
	INSERT_ELEMENTS ( coll , 5 , 9 );
	INSERT_ELEMENTS ( coll , 1 , 4 );

	PRINT_ELEMENTS ( coll , "on entry: " );

	make_heap ( coll.begin () , coll.end () );// 将vector转化成heap

	PRINT_ELEMENTS ( coll , "afer make_heap(): " );

	pop_heap ( coll.begin () , coll.end () );// 将heap [beg, end)内的最高元素,也就是第一个元素,移到最后位置,并将剩余区间[beg, end-1)内的元素组织起来,成为一个新的heap.
	coll.pop_back ();

	PRINT_ELEMENTS ( coll , "after pop_heap(): " );

	coll.push_back ( 17 );
	push_heap ( coll.begin () , coll.end () );// 将end之前的最后一个元素加入原本就是个heap的[beg, end-1)区间内,使整个区间[beg, end)成为一个heap.

	PRINT_ELEMENTS ( coll , "after push_heap(): " );

	sort_heap ( coll.begin () , coll.end () );// 将heap[beg, end)转换为一个已序(sorted)序列。

	PRINT_ELEMENTS ( coll , "after sort_heap(): " );

	system ( "pause" );
}