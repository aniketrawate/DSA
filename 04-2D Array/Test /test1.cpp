#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> arr = {1,5,3,4,3,5,6};

    int maxOfarr = *max_element(arr.begin(), arr.end());

    cout << maxOfarr << endl;

    vector<int> allElements(maxOfarr + 1, 0);

    for(int i = 0; i < allElements.size(); i++){
        cout << allElements[i];
    }

    cout << endl;

    for (int i = 0; i < arr.size(); i++) {
        allElements[arr[i]]++;
    }

    for(int i = 0; i < allElements.size(); i++){
        cout << allElements[i];
    }
    
    return 0;
}