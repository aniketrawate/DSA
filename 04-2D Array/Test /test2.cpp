#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr = {1,5,3,4,3,5,6};

    const int MAX = 1000001;
    int freq[MAX] = {0};

    int size = arr.size();

    // Count frequencies
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    for(int i = 0; i < 9; i++){
        cout << freq[i];
    }

    
    
    return 0;
}