#include "function.h"

namespace cod {
	void Sink ( std::shared_ptr<int> shared_ptr_param ) {
		std::cout << *shared_ptr_param << std::endl;
		return;
	}
	std::shared_ptr<int> Translate ( std::shared_ptr<int> shared_ptr_param ) {
		*shared_ptr_param *= 5;
		return shared_ptr_param;
	}
	std::shared_ptr<int> returnPtr () {
		return std::shared_ptr<int> ( new int ( 5 ) );
	}
}