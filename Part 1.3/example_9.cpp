#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter two strings separated by space and press enter: ";
	string s_1 = "???";
	string s_2 = "???";
	cin >> s_1 >> s_2;
	if (s_1 == s_2) {
		cout << "Two strings \'" << s_1 << ", " << s_2 <<"\' are equal.\n";
	}
	if (s_1 > s_2) {
		cout << "String \'" << s_1 << "\' is alphabetically after \'" << s_2 << "\'.\n";
	}
	if (s_1 < s_2) {
		cout << "String \'" << s_1 << "\' is alphabetically before \'" <<  s_2 << "\'.\n";
	}
	return 0;
}