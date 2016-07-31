/*
6. Write a template function maxn() that takes as its arguments an array of items of
type T and an integer representing the number of elements in the array and that
returns the largest item in the array.Test it in a program that uses the function template
with an array of six int value and an array of four double values.The program
should also include a specialization that takes an array of pointers-to-char as
an argument and the number of pointers as a second argument and that returns the
address of the longest string. If multiple strings are tied for having the longest
length, the function should return the address of the first one tied for longest.Test
the specialization with an array of five string pointers.
*/
#include <iostream>
#include <cstring>

using namespace std;

template <class T>
T maxn(T arr[], int elements);

template <>
const char * maxn(const char* arr[], int elements);

int main() {
	int int_arr[6] = {5,7,6,4,3,2};
	double double_arr[4] = {5.5, 6.6, 7.7, 8.8};
	const char * string_arr[5] = {
		"Testing",
		"Testing Testing",
		"Testing Testing Testing",
		"Testing Testing Testing",
		"Testing Testing",
	};

	cout << "Int array: " << maxn(int_arr, 6) << endl;
	cout << "Double array: " << maxn(double_arr, 4) << endl;
	cout << "String array (Specialized Template): " << maxn(string_arr, 5) << endl;

	return 0;
}

template <class T>
T maxn(T arr[], int elements) {
	T max = arr[0];
	for (int i = 0; i < elements; ++i) {
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template <>
const char * maxn(const char* arr[], int elements) {
	const char * longest_string = arr[0];
	for (int i = 0; i < elements; ++i) {
		if (strlen(arr[i]) > strlen(longest_string))
			longest_string = arr[i];
	}
	return longest_string;
}