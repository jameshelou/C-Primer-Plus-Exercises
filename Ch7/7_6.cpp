/*
6. Write a program that uses the following functions:

Fill_array() takes as arguments the name of an array of double values and an
array size. It prompts the user to enter double values to be entered in the array. It
ceases taking input when the array is full or when the user enters non-numeric
input, and it returns the actual number of entries.

Show_array() takes as arguments the name of an array of double values and an
array size and displays the contents of the array.

Reverse_array() takes as arguments the name of an array of double values and an
array size and reverses the order of the values stored in the array.

The program should use these functions to fill an array, show the array, reverse the
array, show the array,
*/
#include <iostream>
#include <algorithm>

const int SIZE = 5;
using namespace std;

void fillArray(double arr[], int size);
void showArray(const double arr[], int size);
void reverseArray(double arr[], int size);

int main() {
	double a[SIZE];
	fillArray(a, SIZE);
	showArray(a, SIZE);
	reverseArray(a, SIZE);
	showArray(a, SIZE);

	return 0;
}

void fillArray(double arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << "Enter value #" << (i + 1) << ":" << endl;
		cin >> arr[i];
	}
}

void showArray(const double arr[], int size) {
	cout << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << endl;
	}
	cout << endl;
}

void reverseArray(double arr[], int size) {
	int limit = size / 2, i = 0;
	while (i < limit) {
		swap(arr[i], arr[size - i - 1]);
		++i;
	}
}
