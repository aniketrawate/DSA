#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    num1 = 63;
    num2 = 34;
    cout << "num1:" << num1 << " " << "num2:" << num2 << endl;

    int temp1;
    temp1 = num1;
    num1 = num2;
    num2 = temp1;
    cout << "num1:" << num1 << " " << "num2:" << num2 << endl;

    return 0;
}