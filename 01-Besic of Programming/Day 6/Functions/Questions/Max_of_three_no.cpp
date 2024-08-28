#include <iostream>
using namespace std;

// Declaration of function
int Max_of_three(int a, int b, int c);

int main(){

    int A, B, C;
    cout << "enter A;" << endl;
    cin >> A;
    cout << "enter B;" << endl;
    cin >> B;
    cout << "enter C;" << endl;
    cin >> C;

    // function call
    int Max = Max_of_three(A,B,C);
    cout << "Max is:" << Max << endl;
    return 0;
}

// defination of function
int Max_of_three(int a, int b, int c){
    if(a > b){
        if(a > c){
            return a;
        }
    }
    else if(b > c){
        return b;
    }
    else{
        return c;
    }
    return 5; // here i return 5 cause it gives warning if in some cases nothing is return
}