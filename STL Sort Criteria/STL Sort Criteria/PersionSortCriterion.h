#pragma once
#include "Person.h"

class PersionSortCriterion {
public:
	// functor
	bool operator()( const Person& p1 , const Person& p2 )const {
		return p1.lastname () < p2.lastname () || ( !( p2.lastname () < p1.lastname () ) && p1.firstname () < p2.firstname () );
	}
};