#include <iostream>
using namespace std;

bool PrimeCheck(int num){
    for(int i = 2; i < num; i++){
        if((num % i) == 0){
            return false;
        }
    }
    return true;
}

int main(){

    for(int i = 2; i <= 100; i++){
        bool IsPrime = PrimeCheck(i);
        if(IsPrime){ // here i am not writing IsPrime == true cause i can use it as i used
            cout << i << " ";
        }
    }

    return 0;
}