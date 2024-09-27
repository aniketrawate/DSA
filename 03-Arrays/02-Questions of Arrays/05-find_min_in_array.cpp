#include <iostream>
using namespace std;
    // Using INT_MIN
    int MinOfArray(int array1[], int SizeOfArray){
        int MinInArray = INT_MAX;
        for(int i = 0; i < SizeOfArray; i++){
            if(MinInArray > array1[i]){
                MinInArray = array1[i];
            }
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