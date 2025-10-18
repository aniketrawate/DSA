#include <iostream>
#include <vector>
using namespace std;

void twosComplement(vector<int>& nums){
    int carry = 1;
    
    for(int i = 0; i < nums.size() ; i++){
        nums[i] = (nums[i] == 0) ? 1:0;
    }

    for(int i = nums.size() - 1; i >= 0; i--){
        int sum = nums[i] + carry;
        nums[i] = sum % 2;
        carry = sum / 2;
    }
    if(carry == 1){
        nums.insert(nums.begin(),1);
    }
}

int main(){


    vector<int> arr = {0,1,1,0};


    twosComplement(arr);

    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;


    return 0;
}