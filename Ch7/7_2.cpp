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