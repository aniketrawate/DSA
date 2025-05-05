#include <iostream>
using namespace std;

int main(){

    int Array1[2][3];
    int Array1Row = 2;
    int Array1Col = 3;

    for(int r = 0; r < Array1Row; r++){
        for(int c = 0; c < Array1Col; c++){
            cout << "Enter the valute for (" <<  r << "," << c << ") :";
            cin >> Array1[r][c];
        }
    }

    for(int r = 0; r < Array1Row; r++){
        for(int c = 0; c < Array1Col; c++){
            cout << Array1[r][c] << ",";
        }
        cout << endl;
    }

    return 0;
}