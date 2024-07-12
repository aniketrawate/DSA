#include <iostream>
using namespace std;

int main(){

    // ++ is an increment operator
    // there are two types of increment ie pre-increment and post-increment operator

    // To num_1 and num_2 we can say as operand
    
    
    // this is pre-increment

    int num_1 = 5; 
    // first it will increament then perform the operation (ie here cout)
    cout << ++num_1 << endl;
    cout << endl;


    // this is post-increment

    int num_2 = 10;
    // first it will perform operation (ie cout) then it will be incremented 
    cout << num_2++ << endl; // 10 as same 
    cout << num_2 << endl; // it will print incremented ie 11

    return 0;
}