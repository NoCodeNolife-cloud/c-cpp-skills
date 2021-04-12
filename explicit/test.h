#pragma once

namespace code {
	class Test {
	private:
		int x;
	public:
		/**
		 * @brief explicit constructor
		 * @param parax
		*/
		explicit Test(int parax);
		/**
		 * @brief
		 * @return x
		*/
		int getX();
	};
}