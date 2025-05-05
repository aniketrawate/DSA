#include <iostream>
using namespace std;

void Total3Sums(int Array[], int SizeOfArray, int Target){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = i + 1; j < SizeOfArray; j++){
            for(int k = j + 1; k < SizeOfArray; k++){
                if((Array[i] + Array[j] + Array[k]) == Target){
                    cout << "(" << Array[i] << "," << Array[j] << "," << Array[k] << ")" << endl;
                }
            }
        }
    }
}

int main(){

    int Array1[] = {10,20,30,40};
    int SizeOfArray1 = 4;
    int Target1 = 70;

    Total3Sums(Array1, SizeOfArray1, Target1);

    return 0;
}