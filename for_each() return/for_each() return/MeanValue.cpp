#include "MeanValue.h"

void MeanValue::operator()( int elem ) {
	num++;
	sum += elem;
}

double MeanValue::value () {
	return static_cast< double >( sum ) / static_cast< double >( num );
}