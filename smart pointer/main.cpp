#include <iostream>
#include "function.h"

int main ( int argc , char* argv [] ) {
	std::shared_ptr<int>ptr_shared_one ( new int ( 5 ) );				/*create a new shared_ptr*/
	std::shared_ptr<int>ptr_shared_two ( ptr_shared_one );				/*shared_ptr can be point to the same memory*/
	std::cout << *ptr_shared_one << std::endl;
	//std::auto_ptr<int>ptr_unique_three( new int( 5 ) );				auto_ptr is bad and not to use it anymore
	std::unique_ptr<int>ptr_unique_one ( new int ( 10 ) );
	//std::unique_ptr<int>ptr_unique_two( ptr_unique_one );			unique_ptr can't be point to the same memory
	std::cout << *ptr_unique_one << std::endl;
	std::shared_ptr <int> res = cod::returnPtr ();						/*test for the returnPtr()*/
	std::cout << *res << std::endl;
	cod::Sink ( ptr_shared_one );									/*test for the Sink()*/
	ptr_shared_one = cod::Translate ( ptr_shared_one );					/*test for the Translate*/
	std::cout << *ptr_shared_one << std::endl;
	system ( "pause" );
	return 0;
}