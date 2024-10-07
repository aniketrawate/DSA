#include <iostream>
using namespace std;

void Sort0_1Array(int arr[], int SizeOfArray){
    int NoOfZeros = 0;
    int NoOfOnes = 0;
    for(int i = 0; i < SizeOfArray; i++){
        if(arr[i] == 0){
            NoOfZeros += 1;
        }
        else if(arr[i] == 1){
            NoOfOnes +=1;
        }
    }
    cout << "No of zeros:" << NoOfZeros << endl;
    cout << "No of ones:" << NoOfOnes << endl;
    
    // for(int i = 0; i < NoOfZeros; i++){
    //     arr[i] = 0;
    // }
    // for(int i = NoOfZeros; i < SizeOfArray; i++){
    //     arr[i] = 1;
    // }

    // Using inbuilt sort function
    // Sometimes depending upon compiler we need to inculde algorithum header file, but we dont need that here
    // ie. #include <algorithm>
    sort(arr, arr+SizeOfArray);

    for(int i = 0; i < SizeOfArray; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int array1[] = {1,0,0,1,1,0,1,0,1};
    int SizeOfArray1 = 9;

    Sort0_1Array(array1, SizeOfArray1);

    return 0;
}