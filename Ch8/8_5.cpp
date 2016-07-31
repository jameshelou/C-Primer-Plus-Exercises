/*
5. Write a template function max5() that takes as its argument an array of five items
of type T and returns the largest item in the array. (Because the size is fixed, it can
be hard-coded into the loop instead of being passed as an argument.) Test it in a
program that uses the function with an array of five int value and an array of five
double values.
*/
#include <iostream>

using namespace std;
const int MAX_SIZE = 5;

template <class T>
T max5(T some_array[]);

int main() {
	int arr_int[MAX_SIZE] = {3, 4, 5, 2, 1};
	double arr_double[MAX_SIZE] = { 6.5, 8.45, 1.33, 1.45678, 99.56 };
	cout << "Largest in INT array: " << max5(arr_int) << endl;
	cout << "Largest in DOUBLE array: " << max5(arr_double) << endl;
	return 0;
}

template <class T>
T max5(T some_array[]) {
	T largest = some_array[0];
	for (int i = 1; i < MAX_SIZE; ++i) {
		if (some_array[i] > largest)
			largest = some_array[i];
	}
	return largest;
}