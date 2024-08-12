#include <iostream>
using namespace std;

void digits_of_integer(int num){
    while(num > 0){
        int ones_place_digit = num % 10;
        cout << "Digit: " << ones_place_digit << endl;
        num = num / 10;
    }
}

int main(){

    digits_of_integer(2356);

    return 0;
}