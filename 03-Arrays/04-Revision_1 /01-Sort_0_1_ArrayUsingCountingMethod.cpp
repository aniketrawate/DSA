#include <iostream>
using namespace std;

void SortByCount(int Array[], int ArraySize){
    int CountOfZeros = 0;
    int CountOfOnes = 0;

    for(int i = 0; i < ArraySize; i++){
        if(Array[i] == 0){
            CountOfZeros += 1;
        }
        else if(Array[i] == 1){
            CountOfOnes += 1;
        }
    }
    cout << CountOfZeros << endl;
    cout << CountOfOnes << endl;

    for(int i = 0; i < ArraySize; i++){
        if(i < CountOfZeros){
            Array[i] = 0;
        }
        else{
            Array[i] = 1;
        }
    }
    for(int i = 0; i < ArraySize; i++){
        cout << Array[i] << " ";
    }
}

int main(){

    int Arr[] = {0,1,1,1,0,0,1};
    int SizeOfArray = 7;

    SortByCount(Arr, SizeOfArray);

    return 0;
}