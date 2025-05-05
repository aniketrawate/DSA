#include <iostream>
using namespace std;

void OppositeDigonalSum(int Array[][4], int ArrayRow){
    int SumOfOppositeDigonal = 0;
    for(int i = 0; i < ArrayRow; i++){
        SumOfOppositeDigonal += Array[i][ArrayRow -1 -i];
    }
    cout << "The Sum of Opposite Digonal is :" << SumOfOppositeDigonal << endl;
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

    OppositeDigonalSum(Array1, Array1Row);

    return 0;
}