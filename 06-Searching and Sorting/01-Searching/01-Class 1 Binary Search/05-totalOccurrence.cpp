#include <iostream>
#include <vector>
using namespace std;

int occurrence(const vector<int> &nums, int target, bool isFirst){
    int start = 0;
    int end = nums.size() - 1;
    int index = -1;

    //binary search login based on if it is first occurence or last occurence
    while(start <= end){
        int mid = (start + (end - start) / 2);
        if(nums[mid] == target){
            index = mid;
            if(isFirst){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
        else if(nums[mid] < target){
            start = mid + 1;
        }
        else if(nums[mid] > target){
            end = mid - 1;
        }
    }
    return index;
}

int totalOccurrence(const vector<int> &nums, int target){
    int firstOccurrence = occurrence(nums, target, true);
    int lastOccurrence = occurrence(nums, target, false);
    return ((lastOccurrence - firstOccurrence) + 1);
}

int main(){

    vector<int> array = {10,20,20,30,30,30,30,30,40,50,50,50};
    int find = 30;

    int ans = totalOccurrence(array, find);

    cout << ans << endl;


    return 0;
}