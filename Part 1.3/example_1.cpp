// reads input from user and says hello to user
#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter your first name followed by \'enter\': ";
	string first_name;
	cin >> first_name;
	cout << "Hello " << first_name << "!\n";
	return 0;
}