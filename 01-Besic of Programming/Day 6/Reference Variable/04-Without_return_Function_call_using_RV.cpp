#include <iostream>
using namespace std;

void function_1(int num_1){ // creates copy of num_1
    num_1 = num_1 + 10;
    cout << "functon_1 num_1:" << num_1 << endl;
}

int main()
{

    int num_1 = 10;
    num_1++;
    function_1(num_1);
    num_1++;
    cout << "Main Funciton num_1:" << num_1 << endl;

    return 0;
}
// CONCLUSION
// Return plays no role in hare, dosent matter here if use it or not
