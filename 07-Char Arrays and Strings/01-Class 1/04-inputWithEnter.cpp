#include <iostream>
using namespace std;

int main(){

    char arr[5];

    // getline() this method has defult delimeter as \n which is enter so it can take spaces in also
    cin.getline(arr, 100, '\t'); // |t is tab
    // now my program will also take inputs with enter stopes when tab is pressed cause \t is the delimeter here
    // this is the input "a \n b \n hello \t \n" ignore the spaces
    // \n is mapped to 10 in ASCII

    cout << arr << endl;

    cout << arr[0] << "->" << int(arr[0]) << endl;
    cout << arr[1] << "->" << int(arr[1]) << endl;
    cout << arr[2] << "->" << int(arr[2]) << endl;
    cout << arr[3] << "->" << int(arr[3]) << endl;
    cout << arr[4] << "->" << int(arr[4]) << endl;

    return 0;
}