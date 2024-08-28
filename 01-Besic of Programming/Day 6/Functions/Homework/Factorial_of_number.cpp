#include <iostream>
using namespace std;

int FactorialOfNumber(int num){
    int factorial = 1;
    for(int i = 1; i <= num; i++){
        
        factorial = factorial * i;
        
    }
    return factorial;
}

int main(){

    int Num;
    cout << "entere the no: ";
    cin >> Num;
    cout << FactorialOfNumber(Num) << endl;

    return 0;
}