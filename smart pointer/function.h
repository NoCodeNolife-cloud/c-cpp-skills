#pragma once
#include <memory>
#include <iostream>

namespace cod {
	/**
	 * @brief shared_ptr to void
	 * @param  std::shared_ptr<int>
	*/
	void Sink ( std::shared_ptr<int> );
	/**
	 * @brief std::shared_ptr to std::shared_ptr
	 * @param  std::shared_ptr
	 * @return std::shared_ptr
	*/
	std::shared_ptr<int> Translate ( std::shared_ptr<int> );
	/**
	 * @brief void to std::shared_ptr
	 * @return std::shared_ptr
	*/
	std::shared_ptr<int> returnPtr ();
}
