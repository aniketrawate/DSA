#include <iostream>
#include <vector>
using namespace std;

void firstOccurrence(vector<int> nums, int target, int &ansIndex){
    int end = nums.size()-1;
    int start = 0;
    while(start <= end){
        int mid = (start + (end - start)/2);
        if(nums[mid] == target){
            ansIndex = mid;
            end = mid -1;
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
    }
}

int main(){

    vector<int> array = {1,10,10,10,10,10,30,40,50};
    int find = 10; //first occurence in array

    int ansIndex = -1;

    firstOccurrence(array, find, ansIndex);

    cout << ansIndex << endl;

    return 0;
}