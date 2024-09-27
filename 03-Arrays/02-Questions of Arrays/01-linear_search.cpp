#include <iostream>
using namespace std;

void LinerSearch(int arr[], int size_of_arr, int target){
    for(int i = 0; i < size_of_arr; i++){
        if(arr[i] == target){
            cout << target <<" target is present at location " << i << endl;
            return;
        }
    }
    cout << "target not found" << endl;
}

int main(){

    int arr[] = {45, 64, 46, 22, 55};
    int size_of_arr = 5;
    int target = 22;

    LinerSearch(arr, size_of_arr, target);


    return 0;
}