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

// above num is anologes to belows i ie. PrimeCheck(int num) = PrimeCheck(i) == num = i
    int Num;
    cout << "enter the number: ";
    cin >> Num;
    
    for(int i = 2; i <= Num; i++){
        bool IsPrime = PrimeCheck(i);
        if(IsPrime){
            cout  << i << " " ;
        }
        
    }


    return 0;
}