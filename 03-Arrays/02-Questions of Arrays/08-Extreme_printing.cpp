#include <iostream>
using namespace std;

void PrintExtremes(int arr[], int SizeOfArray1){
    for(int i = 0; i < SizeOfArray1/2; i++){
        cout << arr[i] << endl;
        cout << arr[SizeOfArray1 - 1 - i] << endl;
        }
        // if array is odd
    if(SizeOfArray1 != 0){
        cout << arr[SizeOfArray1/2] << endl;
    }
}

int main(){

    int array1[] = {10, 20, 30, 40, 50, 60, 70, 80};
    int SizeOfArray1 = 8;

    PrintExtremes(array1, SizeOfArray1);

    return 0;
}