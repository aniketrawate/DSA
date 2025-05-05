#include <iostream>
using namespace std;

void AllTriplets(int Arr[], int SizeOfArr){
    int Count = 0;
    for(int i = 0; i < SizeOfArr; i++){
        for(int j = 0; j < SizeOfArr; j++){
            for(int k = 0; k < SizeOfArr; k++){
                cout << "(" << Arr[i] << "," << Arr[j] << "," << Arr[k] << ")" << " ";
                Count++;
            }
            cout << endl;
        }
    }
    cout << Count;
}

int main(){

    int Array[] = {10, 20, 30, 40, 50};
    int SizeOfArray = 5;

    AllTriplets(Array, SizeOfArray);

    return 0;
}