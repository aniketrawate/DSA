#include <iostream>
using namespace std;

void DigonalTravarsal1(int Array[][4], int ArrayRow, int ArrayCol){
    for(int r = 0; r < ArrayRow; r++){
        for(int c = 0; c < ArrayCol; c++){
            if(Array[r] == Array[c])
            cout << Array[r][c] << ",";
        }
        cout << endl;
    }
}

void DigonalTravarsal2(int Array[][4], int ArrayRow, int ArrayCol){
    for(int r = 0; r < ArrayRow; r++){
        for(int c = 0; c < ArrayCol; c++){
            if(r == c)
            cout << Array[r][c] << ",";
        }
        cout << endl;
    }
}

void DigonalTravarsal3(int Array[][4], int ArrayRow, int ArrayCol){
    for(int i = 0; i < ArrayRow; i++){
        cout << Array[i][i] << ",";
    }
}

int main(){

    int Array1 [4][4] = {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34},
        {41,42,43,44}
    };

    int Array1Row = 4;
    int Array1Col = 4;

    // DigonalTravarsal1(Array1, Array1Row, Array1Col);
    DigonalTravarsal2(Array1, Array1Row, Array1Col);
    // DigonalTravarsal3(Array1, Array1Row, Array1Col);

    return 0;
}