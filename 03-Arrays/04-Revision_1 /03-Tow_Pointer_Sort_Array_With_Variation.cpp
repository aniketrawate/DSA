#include <iostream>
using namespace std;

void PrintPairs(int Array[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = 0; j < SizeOfArray; j++){
            cout << "(" << Array[i] << "," << Array[j] << ")" << " ";
        }
        cout << endl;
    }
}
// Output
// (10,10) (10,20) (10,30) (10,40) (10,50) 
// (20,10) (20,20) (20,30) (20,40) (20,50) 
// (30,10) (30,20) (30,30) (30,40) (30,50) 
// (40,10) (40,20) (40,30) (40,40) (40,50) 
// (50,10) (50,20) (50,30) (50,40) (50,50)

void PrintPairs2(int Array[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = i; j < SizeOfArray; j++){
            cout << "(" << Array[i] << "," << Array[j] << ")" << " ";
        }
        cout << endl;
    }
}
//Output
// (10,10) (10,20) (10,30) (10,40) (10,50) 
// (20,20) (20,30) (20,40) (20,50) 
// (30,30) (30,40) (30,50) 
// (40,40) (40,50) 
// (50,50) 

void PrintPairs3(int Array[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = 0; j < i; j++){
            cout << "(" << Array[i] << "," << Array[j] << ")" << " ";
        }
        cout << endl;
    }
}
//Output
// (20,10) 
// (30,10) (30,20) 
// (40,10) (40,20) (40,30) 
// (50,10) (50,20) (50,30) (50,40) 

void PrintPairs4(int Array[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = 0; j <= i; j++){
            cout << "(" << Array[i] << "," << Array[j] << ")" << " ";
        }
        cout << endl;
    }
}
//Output
// (10,10) 
// (20,10) (20,20) 
// (30,10) (30,20) (30,30) 
// (40,10) (40,20) (40,30) (40,40) 
// (50,10) (50,20) (50,30) (50,40) (50,50) 


void PrintPairs5(int Array[], int SizeOfArray){
    for(int i = 0; i < SizeOfArray; i++){
        for(int j = 0; j > i; j++){
            cout << "(" << Array[i] << "," << Array[j] << ")" << " ";
        }
        cout << endl;
    }
}
//Output
//Nothing



int main(){

    int Arr[] = {10,20,30,40,50};
    int ArrSize = 5;

    PrintPairs5(Arr, ArrSize);

    return 0;
}