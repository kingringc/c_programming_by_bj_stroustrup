#include "../std_lib_facilities.h"

int main() {
	cout << "Please enter a floating-point value: ";
	int n;
	cin >> n;
	cout << "n == " << n;
	cout << "\nn+1 == " << n + 1;
	cout << "\nthree times n is " << 3*n;
	cout << "\ntwice of n is " << n+n;
	cout << "\nhalf of n is " << n/2;
	cout << "\nsquare-root of n is " << sqrt(n);
	cout << "\n";
	return 0;
}