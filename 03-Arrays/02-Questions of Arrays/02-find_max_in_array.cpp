#include <iostream>
using namespace std;

// Using INT_MIN
int MaxofArray(int array1[], int SizeofArray){
    int MaxInArray = INT_MIN;
    for(int i = 0; i < SizeofArray; i++){
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