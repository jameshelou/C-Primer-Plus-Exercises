/*
3. Write a function that takes a reference to a string object as its parameter and that
converts the contents of the string to uppercase. Use the toupper() function
described in Table 6.4 of Chapter 6.Write a program that uses a loop which allows
you to test the function with different input.
*/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void caps(string& s) {
	for (int i = 0; i < s.length(); ++i) {
		s[i] = toupper(s[i]);
	}
}

int main() {
	string user_string;
	cout << "Enter a string (q to quit): ";
	getline(cin, user_string);
	while (user_string != "q") {
		caps(user_string);
		cout << user_string << endl;
		cout << "Next string (q to quit): ";
		getline(cin, user_string);
	}

	cout << "~FIN~" << endl;
	return 0;
}