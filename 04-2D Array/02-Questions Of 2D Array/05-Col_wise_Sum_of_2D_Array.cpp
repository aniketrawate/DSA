#include <iostream>
using namespace std;

void ColSum(int Array[][3], int ArrayRow, int ArrayCol){
    int NoOfCol = 0;
    for(int c = 0; c < ArrayCol; c++){
        int SumOfCol = 0;
        for(int r = 0; r < ArrayRow; r++){
            SumOfCol += Array[r][c];
        }
        cout << "This is the Column :" << NoOfCol << endl;
        cout << SumOfCol << endl;
        NoOfCol++;
    }
}

int main(){

    int Array1[4][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90},
        {10,20,30}
    };

    int Array1Row = 4;
    int Array1Col = 3;

    ColSum(Array1, Array1Row, Array1Col);

    return 0;
}