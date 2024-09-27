#include <iostream>
using namespace std;

int main() {
    int array1[] = {10, 20, 30, 40, 50, 60, 70};  // Array with odd number of elements
    int size = sizeof(array1) / sizeof(array1[0]);  // Calculate size of the array

    // Outer loop controls the iteration up to the middle of the array
    for (int i = 0; i < size / 2 + 1; i++) {
        // Inner loop handles printing of extreme elements in each iteration
        for (int j = 0; j < 1; j++) {
            cout << "Extreme Left: " << array1[i] << endl;             // Left extreme
            if (i != size - i - 1) {  // Only print right extreme if it's not the middle element
                cout << "Extreme Right: " << array1[size - i - 1] << endl;  // Right extreme
            }
        }
    }

    return 0;
}