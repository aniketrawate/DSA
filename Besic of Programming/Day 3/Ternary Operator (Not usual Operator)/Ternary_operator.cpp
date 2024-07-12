#include <iostream>
using namespace std;

int main(){

    // ternary operator is use to write a single if else code in short form
    //eg

    int age;
    cout << "enter the age:" << endl;
    cin >> age;

    // if(age >= 18){
    //     cout << "You can vote" << endl;
    // }
    // else{
    //     cout << "You can't vote" << endl;
    // }

    // Now this above code can be written using ternary operator
    // eg

    // (condition) ?   if ture statemnt : if false state ;
    (age >= 18) ? cout << "You can vote" : cout << "Yout can't vote" ;

    return 0;
}