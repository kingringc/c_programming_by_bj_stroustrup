// Age calculator
#include "../std_lib_facilities.h"

int main() {
	int age = 0;
	int birth_year = 0;
	int current_year = 0;
	cout << "Please enter your year of birth: ";
	cin >> birth_year;
	cout << "Please enter the current year: ";
	cin >> current_year;
	age = current_year - birth_year;
	cout << "Your present age is " << age << ".\n";
	return 0;
}