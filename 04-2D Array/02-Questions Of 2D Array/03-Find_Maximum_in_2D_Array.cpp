#include <iostream>
using namespace std;

int MaximumIn2DArray(int Array[][3], int ArrayRow, int ArrayCol){
    int Maximum = INT_MIN;
    for(int r = 0; r < ArrayRow; r++){
        for(int c = 0; c < ArrayCol; c++){
            if(Array[r][c] > Maximum){
                Maximum = Array[r][c];
            }
        }
    }
    cout << "this it Maximum in this 2D Array" << endl;
    cout << Maximum << endl ;
    return Maximum;
} 

int main(){

    int Array1[3][3] = {
        {32,44,64},
        {11,24,62},
        {67,74,77}
    };

    int Array1Row = 3;
    int Array1Col = 3;

    int Ans = MaximumIn2DArray(Array1, Array1Row, Array1Col);

    cout << Ans;

    return 0;
}