/*
7. Write a program that reads input a word at a time until a lone q is entered.The
program should then report the number of words that began with vowels, the number
that began with consonants, and the number that fit neither of those categories.
One approach is to use isalpha() to discriminate between words beginning with
letters and those that don’t and then use an if or switch statement to further identify
those passing the isalpha() test that begin with vowels.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	int vowels = 0, cons = 0, other = 0;
	cout << "Enter words (q to quit):" << endl;
	cin >> word;
	while (word != "q") {
		if (isalpha(word[0])) {
			if (word[0] == 'a' || word[0] == 'e' ||
				word[0] == 'i' || word[0] == 'o' ||
				word[0] == 'u') {
				++vowels;
			} 
			else {
				++cons;
			}
		}
		else {
			++other;
		}
		cin >> word;
	}

	// print results
	cout << endl << vowels << " words begin with vowels.\n"
		<< cons << " words begin with consonants.\n"
		<< other << " others.\n ~FIN~\n";

	return 0;
}