#include <iostream>
using namespace std;

int main(){

    char arr[5];
    
    cin >> arr; // enter "love"

    cout << arr[0] << "->" << int(arr[0]) << endl; // int(arr[0]) will print the ASCII value for he arr[0];
    cout << arr[1] << "->" << int(arr[1]) << endl;
    cout << arr[2] << "->" << int(arr[2]) << endl;
    cout << arr[3] << "->" << int(arr[3]) << endl;
    cout << arr[4] << "->" << int(arr[4]) << endl; // 0 is mapped to null in ASCII

    return 0;
}