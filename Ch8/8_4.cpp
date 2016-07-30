#include <iostream>
#include <cstring>		// for strlen(), strcpy()

using namespace std;

struct stringy {
	char *str;		// points to a string
	int ct;			// length of string (not counting '\0')
};


void set(stringy&, char*);
void show(const stringy&);
void show(const stringy&, int n);
void show(const char *);
void show(const char *, int n);

int main()
{
	stringy beany;
	char testing[] = "reality isn't what it used to be.";
	show(beany);
	show(beany, 2);
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);
	show(testing, 3);
	show("DONE!");
	return 0;
}

void set(stringy& s, char* x) {
	char* new_x = new char[strlen(x) + 1];
	strcpy(new_x, x);
	s.str = new_x;
	s.ct = strlen(x);
}

void show(const stringy& s) {
	cout << "Stringy string: " << s.str << endl;
}

void show(const stringy& s, int n) {
	int x = strlen(s.str);
	for (int i = 0; i < x; ++i) {
		cout << "Stringy string #" << i + 1 << ": " << s.str << endl;
	}
}

void show(const char * s) {
	cout << s << endl;
}

void show(const char * s, int n) {
	for (int i = 0; i < n; ++i) {
		cout << s << endl;
	}
}