#include <iostream>
#include <vector>
using namespace std;

void lastOccurrence(vector<int> nums, int target, int &ansIndex){
    int start = 0;
    int end = nums.size() -1;
    while(start <= end){
        int mid = (start + (end - start) / 2);
        if(nums[mid] == target){
            ansIndex = mid;
            start = mid + 1;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid -1;
        }
    }
}

int main(){

    vector<int> array = {10,20,30,40,50,50,50,60};
    int find = 50;
    int ansIndex = -1;

    lastOccurrence(array, find, ansIndex);

    cout << ansIndex << endl;

    return 0;
}