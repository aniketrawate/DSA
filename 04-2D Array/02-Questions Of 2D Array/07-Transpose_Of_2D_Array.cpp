#include <iostream>
using namespace std;

void Transpose2DArray(int Array[][4], int ArrayRow){
    for(int i = 0; i < ArrayRow; i++){
        for(int j = (i+1); j < ArrayRow; j++){
            swap(Array[i][j], Array[j][i]);
        }
    }
}

int main(){

    int Array1[4][4] = {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34},
        {41,42,43,44}
    };
    int Array1Row = 4;

    Transpose2DArray(Array1, Array1Row);

    //Printing the Array;
    for(int i = 0; i < Array1Row; i++){
        for(int j = 0; j < Array1Row; j++){
            cout << Array1[i][j] << "," ;
        }
        cout << endl;
    }
    return 0;
}