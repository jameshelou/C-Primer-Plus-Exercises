/*
2. Write a program that asks the user to enter up to 10 golf scores, which are to be
stored in an array.You should provide a means for the user to terminate input prior
to entering 10 scores.The program should display all the scores on one line and
report the average score. Handle input, display, and the average calculation with
three separate array-processing functions.
*/
#include <iostream>

using namespace std;

void fillArray(int* arr, int size);
void displayArray(const int*, int size);
double avgCalc(const int*, int size);

int main() {
    int arr1[10];
    fillArray(arr1, 10);
    displayArray(arr1, 10);
    double average = avgCalc(arr1, 10);
    cout << "Final average: " << average << endl;
    cout << "FIN" << endl;
}

void fillArray(int* arr, int size) {
    int i = 0;
    cout << "Enter score #" << i+1 << ": " << endl;
    while (cin >> arr[i] && i < size-1) {
        cout << "Enter score #" << i+1 << ": " << endl;
        ++i;
    }
}

void displayArray(const int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "#" << i+1 << ": " << arr[i] << endl;
    }
}

double avgCalc(const int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    
    return sum / double(size);
}