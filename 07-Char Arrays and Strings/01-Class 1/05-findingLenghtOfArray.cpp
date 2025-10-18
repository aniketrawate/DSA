#include <iostream>
using namespace std;


// this funciton will tell us how much is teh char array is filled
int getLength(char Arr[], int size){
    int counter = 0;
    int index = 0;
    while(Arr[index] != '\0'){
        counter++;
        index++;
    }
    return counter;
}
int main(){

    char arr[100];

    cin.getline(arr, 100);

    cout << getLength(arr, 100) << endl;


    return 0;
}