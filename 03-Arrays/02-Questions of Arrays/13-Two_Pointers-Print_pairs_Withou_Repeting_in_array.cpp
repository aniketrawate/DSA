#include <iostream>
using namespace std;

void ArrayPairs(int Arr[], int SizeOfArr){
    for(int i = 0; i < SizeOfArr; i++){
        for(int j = i; j < SizeOfArr; j++){ // here j is = to i and not 0 so this is not repeting the values
            cout << "("<< Arr[i] << Arr[j] << ")" << " ";
        }
        cout << endl;
    }

}

int main(){

    int Array1[] = {10,20,40,50,70};
    int SizeOfArray1 = 5;

    ArrayPairs(Array1, SizeOfArray1);

    return 0;
}