#include <iostream>
using namespace std;

int main(){

    int Height = 5;
    for(int i = 0; i < Height; i++){
        for(int j = 0; j < Height; j++){
            cout << "_ ";
        }
        cout << endl;
    } 

    return 0;
}