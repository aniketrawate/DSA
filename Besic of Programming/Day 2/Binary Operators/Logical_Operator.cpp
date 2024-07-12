#include <iostream>
using namespace std;

int main(){

    int age = 20;
    int car = 1;

    //and "&&" logical operator
    if( age > 17 && car > 0){
        cout << "You are eligible for licence" << endl;
    }

    //or "||" logical operator
    if(age > 17 || car > 5){
        cout << "this will be printed" << endl;
    }

    //not "!" is a logical operator which is used to alter the bool value of a statement 
    //true ie 1 to false ie 0 and vice versa
    bool a = 1;
    cout << !a << endl;

    bool b = 0;
    cout << !b << endl;

    return 0;
}