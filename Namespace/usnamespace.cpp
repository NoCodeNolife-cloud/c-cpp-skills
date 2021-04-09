#include <iostream>
#include "namesp.h"
void other(void) {
	using namespace std;
	using namespace debts;
	Person dg = { "Doodles","Glister" };
	showPerson(dg);
	cout << endl;
	Debt zippy[3];
	int i;
	for (i = 0; i < 3; i++) {
		getDebt(zippy[i]);
	}
	for (i = 0; i < 3; i++) {
		showDebt(zippy[i]);
	}
	cout << "Total debt: $"
		<< sumDebts(zippy, 3)
		<< endl;
	return;
}
void another(void) {
	using namespace std;
	using namespace pers;
	Person collecter = { "Milo","RightShift" };
	showPerson(collecter);
	cout << endl;
}
void main() {
	using namespace std;
	using namespace debts;
	Debt golf = { {"Benny","Goatsniff"}, 120.0 };
	showDebt(golf);
	other();
	another();
	return;
}