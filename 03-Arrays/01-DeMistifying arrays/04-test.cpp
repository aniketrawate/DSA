#include <iostream>
using namespace std;

int main() {
    int array1[] = {10, 20, 30, 40, 50, 60, 70};  // Example with odd number of elements
    int size = sizeof(array1) / sizeof(array1[0]);  // Calculate the size of the array

    // Loop to print extreme elements alternately
    for (int i = 0; i < size / 2; i++) {
        cout << "Extreme Left: " << array1[i] << endl;           // Print from the start
        cout << "Extreme Right: " << array1[size - i - 1] << endl;  // Print from the end
    }

    // Handle the middle element if the array has an odd number of elements
    if (size % 2 != 0) {
        cout << "Middle Element: " << array1[size / 2] << endl;  // Print the middle element
    }
    cout << (size /2) << endl;

    return 0;
}
