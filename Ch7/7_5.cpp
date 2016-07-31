/*
5. Define a recursive function that takes an integer argument and returns the factorial
of that argument. Recall that 3 factorial, written 3!, equals 3 × 2!, and so on, with 0!
defined as 1. In general, if n is greater than zero, n! = n * (n - 1)!.Test your function
in a program that uses a loop to allow the user to enter various values for which the
program reports the factorial.
*/
#include <iostream>

using namespace std;

int fact(int n);

int main() {
	int user_n, ans;
	cout << "Enter factorial number to calculate: (enter a non-number character to quit)" << endl;
	while (cin >> user_n) {
		ans = fact(user_n);
		cout << user_n << "!: " << ans << endl;
	}

	cout << "~Program quit~" << endl;
	return 0;
}

int fact(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * fact(n - 1);
	}
}