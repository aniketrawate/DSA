#include <iostream>
using namespace std;

void RowTravarsal(int Array[][3], int ArrayRow, int ArrayCol){
    for(int i = 0; i < ArrayRow; i++){
        for(int j = 0; j < ArrayCol; j++){
            cout << Array[i][j] << ",";
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

    RowTravarsal(Array1, Array1Row, Array1Col);

    return 0;
}