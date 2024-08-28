#include <iostream>
using namespace std;

bool prime_check(int num){
    for(int i = 2; i < num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int Num;
    cout << "enter the number (more than 2):";
    cin >> Num;

    bool if_prime = prime_check(7);

    if(if_prime == false){
        cout << Num << " is not a prime number" << endl;
    }
    else if(if_prime == true){
        cout << Num << " is a prime number" << endl;
    }
    

    return 0;
}