#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter your first name and age (followed by enter): ";
	string first_name;
	int age = 23;
	cin >> first_name >> age;
	cout << "Hello " << first_name << " your age is " << age << ".\n";
	return 0;
}