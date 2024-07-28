#include <iostream>
using namespace std;

void prime_check(int num){
    for(int i = 2; i <= num; i++){
        if((num % i) == 0 ){
            cout << "not a prime no." << endl;
        }
        else{
            cout << "it is a prime no." << endl;
        }
    }
}

int main(){

    prime_check(7);

    return 0;
}