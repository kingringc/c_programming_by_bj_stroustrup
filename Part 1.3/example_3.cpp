#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter your first name and age (followed by enter): ";
	string first_name = "??";
	int age = 0;
	int years_to_month = 0;
	cin >> first_name >> age;
	years_to_month = age * 12;
	cout << "Hello " << first_name << ", you are " << years_to_month << " months older.\n";
	return 0;
}