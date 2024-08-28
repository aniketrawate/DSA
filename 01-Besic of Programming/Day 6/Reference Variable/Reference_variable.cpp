// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    int num_1 = 45;
    int num_2 = num_1;
    int &num_3 = num_1;

    int num_4 = num_3; // creates copy based on reference variable num_3 ie value of actual num_1

    cout << num_4 << endl; // same value as num_1

    // printing memory location
    // here you can see both num_1 and num_2 has diff memory locaions that means it has diff memory in maemory ie it is not refference variavle but num_3 is.
    cout << &num_1 << endl;
    cout << &num_2 << endl;
    cout << &num_3 << endl;
    cout << &num_4 << endl;

    return 0;
}