#include <iostream>
#include <exception>
using namespace std;

int main() {
	cin.exceptions(ios_base::failbit);
	cout << "Enter numbers: ";
	int sum = 0;
	int input;
	try {
		while (cin >> input) {
			sum += input;
		}
	}
	catch (ios_base::failure& bf) {
		cout << bf.what() << endl;
		cout << "O! the horror!" << endl;
	}
	cout << "Last value entered = " << input << endl;
	cout << "Sum = " << sum << endl;
	return 0;
}
}