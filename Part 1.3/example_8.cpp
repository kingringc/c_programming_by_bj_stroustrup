#include "../std_lib_facilities.h"

int main() {
	string first_name = "???";
	string last_name = "???";
	cout << "Please enter first and last name followed by enter: ";
	cin >> first_name >> last_name;
	cout << "Hello, " << first_name + ' ' + last_name;
	cout << "\n";
	return 0;
}