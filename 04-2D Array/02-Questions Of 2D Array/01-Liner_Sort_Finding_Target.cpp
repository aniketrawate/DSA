#include <iostream>
using namespace std;


bool LinerSort(int Array[][4], int Target, int ArrayRow, int ArrayCol){
    for(int r = 0; r < ArrayRow; r++){
        for(int c = 0; c < ArrayCol; c++){
            if(Array[r][c] == Target){
                cout << "Target " << Target << " is Found" << endl;
                cout << "(" << r << "," << c << ")" << endl;
                return true;
            }
        }
    }
    return false;
}

int main(){

    int Array1 [3][4] = {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34}
    };

    int Array1Row = 3;
    int Array1Col = 4;

    int Target = 32;

    bool Ans = LinerSort(Array1, Target, Array1Row, Array1Col);

    if(Ans == true){
        cout << "Target is Found: ";
    }
    else{
        cout << "Target is not Found: ";
    }

    return 0;
}