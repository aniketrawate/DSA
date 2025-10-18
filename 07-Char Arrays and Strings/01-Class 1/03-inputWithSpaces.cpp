#include <iostream>
using namespace std;

int main(){

    char arr[5];
    
    // use this method to get spaces also as input
    cin.getline(arr, 100); // enter "lo ve" 
    // can clearly see now " " space is mapped to 32

    cout << arr[0] << "->" << int(arr[0]) << endl;
    cout << arr[1] << "->" << int(arr[1]) << endl;
    cout << arr[2] << "->" << int(arr[2]) << endl;
    cout << arr[3] << "->" << int(arr[3]) << endl;
    cout << arr[4] << "->" << int(arr[4]) << endl;

    // getline() this method has defult delimeter as \n which is enter so it can take spaces in also
    return 0;
}