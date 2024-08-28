#include <iostream>
using namespace std;

void check_even_odd(int num){
    if(num % 2 == 0){
        cout << "number is even" << endl;
    }
    else{
        cout << "number is odd" << endl;
    }
}

int main(){

    int num_1;
    cout << "enter the no.:" << endl;
    cin >> num_1;
    check_even_odd(num_1);

    return 0;
}