/*
3. Here is a structure declaration:

struct box
{
char maker[40];
float height;
float width;
float length;
float volume;
};

a. Write a function that passes a box structure by value and that displays the
value of each member.

b. Write a function that passes the address of a box structure and that sets the
volume member to the product of the other three dimensions.

c. Write a simple program that uses these two functions.
*/

#include <iostream>

using namespace std;

struct box {
	char maker[40];
	float height;
	float width;
	float volume;
};

void displayStruct(const box* b);
void calcBoxVolume(box* b);

int main() {
	box testbox = { "TestBox", 5.5, 10.25, 30.0 };
	displayStruct(&testbox);
	calcBoxVolume(&testbox);
	cout << endl << endl;
	displayStruct(&testbox);
	return 0;
}

void displayStruct(const box* b) {
	cout << "Box Maker: " << b->maker << "\nHeight: " << b->height
		<< "\nWidth: " << b->width << "\nVolume: " << b->volume << endl;
}

void calcBoxVolume(box* b) {
	b->volume = b->height * b->width * b->height;
}