#include <iostream>
using namespace std;

void DigonalSum1(int Array[][4], int ArrayRow, int ArrayCol){
    int SumOfDigonal = 0;
    for(int r = 0; r < ArrayRow; r++){
        for(int c = 0; c < ArrayCol; c++){
            if(r == c){
                SumOfDigonal += Array[r][c];
            }
        }
    }
    cout << "Sum Of the Digonal Elements :" << SumOfDigonal << endl;
}

void DigonalSum2(int Array[][4], int ArrayRow, int ArrayCol){
    int SumOfDigonal = 0;
    for(int i = 0; i < ArrayRow; i++){
        SumOfDigonal += Array[i][i];
    }
    cout << "Sum Of the Digonal Elements :" << SumOfDigonal << endl;
}

int main(){

    int Array1[4][4] = {
        {1,20,30,40},
        {50,6,70,80},
        {90,10,2,30},
        {40,50,60,7}
    };

    int Array1Row = 4;
    int Array1Col = 4;

    // DigonalSum1(Array1, Array1Row, Array1Col);
    DigonalSum2(Array1, Array1Row,  Array1Col);
    return 0;
}