#include <iostream>
using namespace std;

int main(){

    int Array1 [3][4] = {
                        {10,20,30,40},
                        {11,12,13,14},
                        {21,22,23,24}
                        };
    
    int Array1Row = 3;
    int Array1Col = 4;
    cout << Array1[1][2] << endl; 

    for(int i = 0; i < Array1Row; i++){
        for(int j = 0; j < Array1Col; j++){
            cout << Array1[i][j] << ",";
        }
        cout << endl;
    }

    cout << Array1[1]; // This showes garbage value
    
    return 0;
}