#include <iostream>
using namespace std;

int main(){

    // -- is an Decrement operator
    // there are two types of Decrement ie Pre-Decrement and Post-Decrement operator

    // To num_1 and num_2 we can say as operand
    
    
    // this is Pre-Decrement

    int num_1 = 5; 
    // first it will Decreament then perform the operation (ie here cout)
    cout << --num_1 << endl;
    cout << endl;


    // this is Post-Decrement

    int num_2 = 10;
    // first it will perform operation (ie cout) then it will be Decremented 
    cout << num_2-- << endl; // 10 as same 
    cout << num_2 << endl; // it will print Decremented ie 11

    return 0;
}