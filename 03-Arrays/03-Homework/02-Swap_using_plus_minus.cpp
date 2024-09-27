#include <iostream>
using namespace std;

int main(){

    int num1, num2;
    num1 = 23;
    num2 = 45;
    cout << "num1:" << num1 << " " << "num2:" << num2 << endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    cout << "num1:" << num1 << " " << "num2:" << num2 << endl;

    return 0;
}