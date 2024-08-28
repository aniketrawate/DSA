#include <iostream>
using namespace std;

bool BitwiseEvenOrOdd(int num){
    if((num & 1) == 0 ){
    //1 is binary here not decimal system 1
        return true;
    }
    else{
        return false;
    }
}

int main(){
    
    int Num;
    cout << "enter the number: ";
    cin >> Num;

    
    if(BitwiseEvenOrOdd(Num) == true){
        cout << "It is even :)";
    }
    else if(BitwiseEvenOrOdd(Num) == false){
        cout << "It is odd :(";
    }

    return 0;
}