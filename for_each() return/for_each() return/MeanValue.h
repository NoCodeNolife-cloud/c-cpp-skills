#pragma once

class MeanValue {
private:
	long num;
	long sum;
public:
	MeanValue () :num ( 0 ) , sum ( 0 ) {}
	void operator()( int elem );
	double value ();
};
