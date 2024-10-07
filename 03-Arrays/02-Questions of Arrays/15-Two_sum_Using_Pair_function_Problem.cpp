#include <iostream>
using namespace std;

pair<int,int> TwoSum(int Arr[], int SizeOfArr, int Target){
    pair<int,int> Ans = make_pair(-1,-1);
    for(int i = 0; i < SizeOfArr; i++){
        for(int j = 0; j < SizeOfArr; j++){
            if((Arr[i]+ Arr[j]) == Target){
                cout << "i:" << i << "  j:" << j << endl;
                Ans.first = Arr[i];
                Ans.second = Arr[j];
                return Ans;
            }
        }
    }
    
}

int main(){

    int Array1[] = {10,33,54,76,65,7};
    int SizeOfArray1 = 6;
    int Target = 141;

    pair<int,int> Result = TwoSum(Array1, SizeOfArray1, Target);

    if(Result.first == -1 && Result.second == -1){
        cout << "Target is Not Present" << endl;
    }
    else{
        cout << "Target is Present: " << Result.first << " " << Result.second << endl;
    }

    return 0;
}