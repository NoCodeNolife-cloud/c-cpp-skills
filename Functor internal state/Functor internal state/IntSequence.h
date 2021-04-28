#pragma once

class IntSequence {
private:
	int value;
public:
	// constructor
	IntSequence ( int initialValue ) :value ( initialValue ) {};

	// function call
	int operator()();
};
