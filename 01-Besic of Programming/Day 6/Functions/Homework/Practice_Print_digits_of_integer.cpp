#include <iostream>
using namespace std;

void digits_of_integers(int num){
    while(0 < num){
        int oneth_place = num % 10;
        cout << "digit: " << oneth_place << endl;
        num = num / 10;
    }
}

int main(){
    int Num;
    cout << "enter the integer: ";
    cin >> Num;
    digits_of_integers(Num);

    return 0;
}