/*
1. Write a program that repeatedly asks the user to enter pairs of numbers until at
least one of the pair is 0. For each pair, the program should use a function to calculate
the harmonic mean of the numbers.The function should return the answer to
main(), which should report the result.The harmonic mean of the numbers is the
inverse of the average of the inverses and can be calculated as follows:

harmonic mean = 2.0 × x × y / (x + y)
*/

#include <iostream>

using namespace std;

double harmonicMean(double x, double y);

int main() {
	double x, y;

	cout << "~Harmonic Mean Calculator~\nEnter a pair of two numbers with one of them being 0:" << endl;
	cin >> x >> y;
	while (x != 0.0 || y != 0.0) {
		cin >> x >> y;
	}
	double hm = harmonicMean(x, y);
	cout << "Harmonic mean is: " << hm << endl;

	return 0;
}

double harmonicMean(double x, double y) {
	return (2.0 * x * y / (x + y));
}