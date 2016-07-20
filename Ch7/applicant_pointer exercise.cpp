#include <iostream>

using namespace std;

struct applicant {
	char name[30];
	int credit_ratings[3];
};

typedef void(*p1)(applicant* a);
typedef const char* (*p2)(const applicant* a1, const applicant* a2);

void f1(applicant* a);
const char* f2(const applicant* a1, const applicant* a2);

int main() {
	applicant test = { "Jim Smith", {10, 20, 30} };
	// pointers to func using typedef shortcut
	p1 pointer_1 = f1;
	p2 pointer_2 = f2;



	// declaring array of 5 pointers to f1()
	p1 ap[5];

	// declaring pointer -> array -> 10 pointers to f2()
	p2 *pa[10];

	return 0;
}

void f1(applicant* a) {
	cout << "test" << endl;
}