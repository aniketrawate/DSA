#include <iostream>
using namespace std;

int main(){
    
    int arr1[] = {1, 4, 5, 56};
    cout << sizeof(arr1) << endl;

    int arr2[] = {1, 4, 5, 56,};
    cout << sizeof(arr1) << endl;

    // int arr3[] = {1, 4, 5, 56,,}; this gives error
    // cout << sizeof(arr1);

    cout << INT_MIN << endl;
    cout << INT_MAX << endl;

    if(33 < 33){
        cout << true << endl;
    }
    else{
        cout << false << endl;
    }

    cout << max(33,33) << endl;
    cout << min(33,33) << endl;

    return 0;
}