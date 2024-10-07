#include <iostream>
using namespace std;

bool TwoSum(int Arr[], int SizeOfArr, int Target){
    for(int i = 0; i < SizeOfArr; i++){
        for(int j = 0; j < SizeOfArr; j++){
            if((Arr[i]+ Arr[j]) == Target){
                return true;
            }
        }
    }
    return false;
}

int main(){

    int Array1[] = {10,33,54,76,65,7};
    int SizeOfArray1 = 6;
    int Target = 17;

    bool IsPresent = TwoSum(Array1, SizeOfArray1, Target);

    if(IsPresent){
        cout << "Target is Present" << endl;
    }
    else{
        cout << "Target is Not Present" << endl;
    }

    return 0;
}