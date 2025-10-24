#include <iostream>
using namespace std;

int sizeOfArr(int Arr[]){
    int counter = 0;
    while(Arr[counter] != '\0'){
        counter++;
    }
    return 0;
}

void reverseCharArray(int Arr[]){
    int size = sizeOfArr(Arr);
    int s = 0;
    int e = size -1;
    while(s<=e){
        int temp = Arr[s];
        Arr[s] == Arr[e];
        Arr[e] == temp;
    }
}

int main(){

    char arr[100] = "hello World";

    reverseCharArray(arr);

    cout << arr;
    return 0;
}