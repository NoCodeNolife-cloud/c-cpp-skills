#include "function.h"

namespace cod {
	void fill ( std::set<int , cod::RuntimeCmp<int>>& set ) {
		set.insert ( 4 );
		set.insert ( 7 );
		set.insert ( 5 );
		set.insert ( 1 );
		set.insert ( 6 );
		set.insert ( 2 );
		set.insert ( 5 );
		return;
	}
}