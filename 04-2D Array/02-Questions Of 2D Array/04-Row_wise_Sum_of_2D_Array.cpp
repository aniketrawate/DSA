#include <iostream>
using namespace std;


void RowSum(int Array[][4], int ArrayRow, int ArrayCol){
    
    int NoOfRow = 0;
    for(int r = 0; r < ArrayRow; r++){
        int SumOfRow = 0;
        for(int c = 0; c < ArrayCol; c++){
            SumOfRow += Array[r][c];
        }
        cout << "This the the Row :" << NoOfRow << endl;
        cout << SumOfRow << endl;
        NoOfRow++;
    }
}

int main(){

    int Array1 [3][4] = {
        {44,53,65,67},
        {12,56,97,90},
        {23,43,48,97}
    };

    int Array1Row = 3;
    int Array1Col = 4;

    RowSum(Array1, Array1Row, Array1Col);

    return 0;
}