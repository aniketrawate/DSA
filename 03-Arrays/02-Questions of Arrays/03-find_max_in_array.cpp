#include <iostream>
using namespace std;

// Without using INT_MIN and comparing with self arrays elemnts
int MaxofArray(int array1[], int SizeofArray){
    int MaxInArray = array1[0]; // Change is here, started comparing with 0th element
    for(int i = 1; i < SizeofArray; i++){ //we will start loop from 1 insted of 0 for more optimal code 
        if(MaxInArray < array1[i]){
            MaxInArray = array1[i];
        }
    }
    return MaxInArray;

}

int main(){
    
    int array1[10];
    int SizeofArray;
    cout << "Enter the size of Array: " << endl;
    cin >> SizeofArray;

    for(int i = 0; i < SizeofArray; i++){
        cout << "enter the valuse of array: " << endl;
        cin >> array1[i];
    }
    
    cout << "max of given array is: " << MaxofArray(array1, SizeofArray) << endl;
    
    return 0;
}