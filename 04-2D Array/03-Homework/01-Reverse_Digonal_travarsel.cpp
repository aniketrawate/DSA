#include <iostream>
using namespace std;

void ReverseDigonalTravarsal(int Array[][4], int ArrayRow, int ArrayCol){
    for(int i = 0; i < ArrayRow; i++){
            cout << Array[i][ArrayRow - 1 - i] << ",";
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

    ReverseDigonalTravarsal(Array1, Array1Row, Array1Col);

    return 0;
}