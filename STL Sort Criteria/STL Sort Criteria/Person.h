#pragma once
#include <string>

class Person {
public:
	Person ( std::string _firstname , std::string _lastname );
	std::string firstname ()const;
	std::string lastname ()const;
private:
	std::string first;
	std::string last;
};
