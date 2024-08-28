#include <iostream>
using namespace std;

int main(){

    int a = 10;
    int b = 5;

    cout << a + b << endl; //addition 
    cout << a - b << endl; //subtraction
    cout << a * b << endl; //multiplication
    cout << a / b << endl; //division
    cout << a % b << endl; //modulas
    cout << endl;

    //In division 

    int x = 100;
    int y = 3 ;

    cout << x / y << endl; // it will output 33 and not 33.33333
    // for making this code to give right answers we need to use right datatypes

    float c = 100;
    cout << c / y << endl; //it will give answers in decimal due to float used

    double d = 100;
    cout << d / y << endl; 

    //double can support much more decimal no ie pricision than float 
    //double has 15-17 decimal points precison and float has 6-7 decimal points precision

    return 0;
}