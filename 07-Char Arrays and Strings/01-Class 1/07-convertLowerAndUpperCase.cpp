// Convert to Uppercase a => A
// a[97] => A[65]

// 97[a]-32 => 65[A]
// 97[a](- 97[a] + 65[A]) = 65[A]

// Convert to Lowercase A => a
// A[65] => a[97]

// 65[A]+32 => 97[a]
// 65[A](- 65[A] + 97[a]) = 97[a]

#include <iostream>
using namespace std;

void convertUppercase(char arr[], int size){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'a' && arr[i] <= 'z') arr[i] = arr[i] - 'a' + 'A'; 
    }
}
void convertLowercase(char arr[], int size){
    for(int i = 0; arr[i] != '\0'; i++){
        if(arr[i] >= 'A' && arr[i] < 'Z') arr[i] = arr[i] - 'A' + 'a';
    }
}

int main(){

    char arr1[40] = "this is the lower case char array";
    char arr2[40] = "THIS IS THE UPPER CASE CHAR ARRAY";
    int size = 40;

    convertUppercase(arr1, size);
    convertLowercase(arr2, size);

    cout << arr1 << ":" << endl << arr2 << ":" << endl;

    
    return 0;
}