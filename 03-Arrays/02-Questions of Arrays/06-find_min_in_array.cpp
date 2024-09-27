#include <iostream>
using namespace std;
    //  Without using INT_MIN
    int MinOfArray(int array1[], int SizeOfArray){
        int MinInArray = array1[0]; // Changed here
        for(int i = 1; i < SizeOfArray; i++){ //we will start loop from 1 insted of 0 for more optimal code 
            // if(MinInArray > array1[i]){
            //     MinInArray = array1[i];
            // }
            // Changed here also
            MinInArray = min(MinInArray, array1[i]);
        }
        return MinInArray;
    }

int main(){

    int array1[10];
    int SizeOfArray;
    cout << "enter the size of the array: " << endl;
    cin >> SizeOfArray;

    for(int i = 0; i < SizeOfArray; i++){
        cout << "enter the values in Array: " << endl;
        cin >> array1[i];
    }

    cout << "minimum of the arry is: " << MinOfArray(array1, SizeOfArray) << endl;

    return 0;
}