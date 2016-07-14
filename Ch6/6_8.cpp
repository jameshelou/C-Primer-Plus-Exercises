/*
8. Write a program that opens a text file, reads it character-by-character to the end of
the file, and reports the number of characters in the file.
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
	ifstream text_file;
	char x;
	int count = 0;
	text_file.open("testtext.txt");

	while (text_file >> x) {
		++count;
	}

	cout << "Character count: " << count << " chars in file.\n";
	cout << "~FIN~\n";

	text_file.close();

	return 0;
}