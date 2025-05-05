#include <iostream>
using namespace std;

void PrintPairs(int Array[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = 0; j < SizeOfArray; j++){
            cout << "(" << Array[i] << "," << Array[j] << ")" << " ";
        }
        cout << endl;
    }
}

int main(){

    int Arr[] = {10,20,30,40,50};
    int ArrSize = 5;

    PrintPairs(Arr, ArrSize);

    return 0;
}