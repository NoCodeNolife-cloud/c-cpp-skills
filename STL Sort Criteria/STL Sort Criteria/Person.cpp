#include "Person.h"

Person::Person ( std::string _firstname , std::string _lastname ) {
	first = _firstname;
	last = _lastname;
}

std::string Person::firstname ()const {
	return first;
}

std::string Person::lastname ()const {
	return last;
}