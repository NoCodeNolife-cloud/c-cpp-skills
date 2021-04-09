#include <iostream>
#include "namesp.h"
namespace pers {
	using namespace std;
	void getPerson(Person& rp) {
		cout << "Enter first name: ";
		cin >> rp.fname;
		cout << "Enter last name:";
		cin >> rp.lname;
		return;
	}
	void showPerson(const Person& rp) {
		using namespace std;
		cout << rp.lname
			<< ", "
			<< rp.fname;
		return;
	}
}
namespace debts {
	using namespace std;
	void getDebt(Debt& rd) {
		getPerson(rd.name);
		cout << "Enter debt:";
		cin >> rd.amount;
	}
	void showDebt(const Debt& rd) {
		showPerson(rd.name);
		cout << ": $"
			<< rd.amount
			<< endl;
	}
	double sumDebts(const Debt ar[], int n) {
		double total = 0;
		for (int i = 0; i < n; i++) {
			total += ar[i].amount;
		}
		return total;
	}
}