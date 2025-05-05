#include <iostream>
using namespace std;

int main(){

    int Array1 [3][2];
    int Array1Row = 3;
    int Array1Col = 2;

    for(int c = 0; c < Array1Col; c++){
        for(int r = 0; r < Array1Row; r++){
            cout << "Enter the value for (" << r << "," << c << ") :";
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