#include <iostream>
using namespace std;

void replaceCharacter(char arr[], int size){
    for(int i = 0; i < size; i++){
        if(arr[i] == '@'){
            arr[i] = ' ';
        }
    }
}

int main(){

    char arr[100] = "this@the@char@array";
    int size = 100;

    replaceCharacter(arr, size);

    cout << arr << ":" << endl;

    return 0;
}