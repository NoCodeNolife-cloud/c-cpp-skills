#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include "PersionSortCriterion.h"
#include "Person.h"

int main () {
	typedef std::set<Person , PersionSortCriterion> PersoonSet;// declare set person
	PersoonSet coll;// new collection

	// declare and push back to coll
	Person person1 ( "a" , "b" );
	coll.insert ( person1 );
	Person person2 ( "a" , "c" );
	coll.insert ( person2 );
	Person person3 ( "b" , "b" );
	coll.insert ( person3 );

	for ( std::set<Person>::iterator pos = coll.begin (); pos != coll.end (); ++pos ) {
		std::cout << pos->firstname () << " " << pos->lastname () << std::endl;
	}

	system ( "PAUSE" );
	return 0;
}