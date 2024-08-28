#include <iostream>
using namespace std;

void function_1(int &num_1){ // Referces to the original num_1 and dosent create copy
    num_1 = num_1 + 10;
    cout << "functon_1 num_1:" << num_1 << endl;
}

int main(){

    int num_1 = 10;
    num_1++;
    function_1(num_1);
    num_1++;
    cout << "Main Funciton num_1:" << num_1 << endl;

    return 0;
}