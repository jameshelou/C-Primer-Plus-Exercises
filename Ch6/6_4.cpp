#include <iostream>

using namespace std;

const int strsize = 20;

int main() {
	struct bop {
		char fullname[strsize];
		char title[strsize];
		char bopname[strsize];
		int pref; // 0 = full, 1 = title, 2 = bop
	};

	char choice;

	bop* bop_p = new bop[3];
	bop_p[0] = {"James Helou", "CEO", "ICECRUISER", 1};
	bop_p[1] = {"Nathan Brown", "Doctor", "NATEB", 2};
	bop_p[2] = {"Knowelle Carter", "Singer", "BEYONCE", 3};

	cout << "BOP Programmers List\n"
		<< "a. display by name\t b. display by title\n"
		<< "c. display by bopname\t d. display by preference\n"
		<< "q. quit" << endl;

	cin >> choice;
	while (choice != 'q') {
		switch (choice) {
		case 'a':
			for (int i = 0; i < 3; ++i) {
				cout << bop_p[i].bopname << endl;
				break;
			}
		case 'b':
			for (int i = 0; i < 3; ++i) {
				cout << bop_p[i].title << endl;
				break;
			}
		case 'c':
			for (int i = 0; i < 3; ++i) {
				cout << bop_p[i].bopname << endl;
				break;
			}
		case 'd':
			cout << "Enter pref number (1-3): \n";
			(cin >> bop_p->pref).get();
			cout << bop_p[bop_p->pref].fullname << " you selected.\n";
			break;
		default:
			cout << "You did not pick a valid choice.\n";
			break;
		}
	}

	cout << "\n\t~FIN~\n";

	delete bop_p;
	return 0;
}