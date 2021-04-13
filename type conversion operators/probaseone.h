#pragma once
#include <iostream>
#include <fstream>
#include "base.h"

namespace code {
    class ProBaseOne :protected code::Base {
    protected:
	  int b;
    public:
	  explicit ProBaseOne(int paraa, int parab);
	  void show();
    };
}