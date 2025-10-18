#include <iostream>
#include <vector>

using namespace std;

int binarySearch(const vector<int> &nums, int target){
    int size = nums.size();
    int start = 0;
    int end = size -1;
    while(start <= end){
        int mid = (start + (end - start) / 2);
        if(nums[mid] == target){
            return mid; // return the index
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
    }
    return -1;
}

int main(){

    vector<int> array = {-1,0,3,5,9,12};
    int n = 9;

    int ans = binarySearch(array, n);

    cout << ans << endl;
    

    return 0;
}