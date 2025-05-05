#include <iostream>
using namespace std;

void ColTravarsal(int Array[][3], int ArrayRow, int ArrayCol){
    for(int c = 0; c < ArrayCol; c++){
        for(int r = 0; r < ArrayRow; r++){
            cout << Array[r][c] << ",";
        }
        cout << endl;
    }
}

int main(){

    int Array1 [4][3] = {
        {11,12,13},
        {21,22,23},
        {31,32,33},
        {41,42,43}
    };

    int Array1Row = 4;
    int Array1Col = 3;

    ColTravarsal(Array1, Array1Row, Array1Col);

    return 0;
}