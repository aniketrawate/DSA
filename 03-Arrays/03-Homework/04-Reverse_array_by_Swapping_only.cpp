#include <iostream>
using namespace std;
// this is valid for both even and odd no. of elements in array
void ReverseArray(int arr[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray / 2; i++){
        arr[i] = arr[i] ^ arr[SizeOfArray - 1 -i];
        arr[SizeOfArray - 1 -i] = arr[i] ^ arr[SizeOfArray - 1 -i];
        arr[i] = arr[i] ^ arr[SizeOfArray - 1 -i];
    }
    for(int i = 0; i < SizeOfArray; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int array1[] = {1,2,3,4,5,6,7,8,9};
    int SizeOfArray1 = 9;

    ReverseArray(array1, SizeOfArray1);

    return 0;
}