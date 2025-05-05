#include <iostream>
using namespace std;

int MinimumIn2DArray(int Array[][3], int ArrayRow, int ArrayCol){
    int Minimum = INT_MAX;
    for(int r = 0; r < ArrayRow; r++){
        for(int c = 0; c < ArrayCol; c++){
            if(Array[r][c] < Minimum){
                Minimum = Array[r][c];
            }
        }
    }
    cout << "this it Minimum in this 2D Array" << endl;
    cout << Minimum << endl ;
    return Minimum;
} 

int main(){

    int Array1[3][3] = {
        {32,44,64},
        {11,24,62},
        {67,74,77}
    };

    int Array1Row = 3;
    int Array1Col = 3;

    int Ans = MinimumIn2DArray(Array1, Array1Row, Array1Col);

    cout << Ans;

    return 0;
}