#include<iostream>
using namespace std;

int main(){

    char arr[5];// even if size is 5 but it can still store more then 5 char

    cin >> arr; // can take love which is 4 and also beautifull which is 10;
    // if space is given then it wont include it and the char after it

    // i can also take inpute like traditional way in int array 
    // for(int i = 0; i < 9; i++){ // size of an array doesnt matter in both the cases but have to mention when declaring the array
    //     cin >> arr[i];
    // }

    cout << arr;

    return 0;
}