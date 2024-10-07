#include <iostream>
using namespace std;

void TripletsOfArray(int Arr[], int SizeOfArr){
    int CountOfTriplets = 0;
    for(int i = 0; i < SizeOfArr; i++){
        for(int j = 0; j < SizeOfArr; j++){
            for(int k = 0; k < SizeOfArr; k++){
                cout << "(" << Arr[i] << " " << Arr[j] << " " << Arr[k] << ")" << " ";
                CountOfTriplets += 1;
            }
            cout << endl;
        }
    }
    cout << CountOfTriplets << endl;

}

int main(){

    int Array1[] = {10,20,30,40};
    int SizeOfArray1 = 4;

    TripletsOfArray(Array1, SizeOfArray1);

    return 0;
}