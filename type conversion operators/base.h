#pragma once
#include <iostream>
#include <fstream>

namespace code {
	class Base {
	protected:
		int a;
	public:
		explicit Base ( int paraa );
		virtual void show ();
	};
}