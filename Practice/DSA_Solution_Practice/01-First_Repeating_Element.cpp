#include <iostream>
using namespace std;

int firstRepeated(vector <int> &arr){
    int maxOfarr = *max_element(arr.begin(), arr.end());

    vector <int> allElements(maxOfarr + 1, 0);

    for(int i = 0; i < arr.size(); i++){
        allElements[arr[i]]++;
    }

    for(int i = 0; i < arr.size(); i++){
        if(allElements[arr[i]] > 1){
            return i+1;
        }
    }
    return -1;
};

int main(){

    return 0;
}