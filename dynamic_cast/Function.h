#pragma once
#include "Grand.h"
#include "Superb.h"
#include "Magnificent.h"
#include <iostream>

Grand* GetOne() {
	Grand* p = nullptr;
	switch (rand() % 3) {
	case 0:
		p = new Grand(rand() % 100);
		break;
	case 1:
		p = new Superb(rand() % 100);
		break;
	case 2:
		p = new Magnificent(rand() % 100, 'A' + rand() % 26);
		break;
	}
	return p;
}