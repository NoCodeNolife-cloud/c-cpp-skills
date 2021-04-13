#pragma once
#include <iostream>
#include <fstream>
#include "base.h"

namespace code {
	class ProBaseTwo :protected code::Base {
	protected:
		int c;
	public:
		explicit ProBaseTwo ( int paraa , int parac );
		void show ();
	};
}
