//Find the Odd occuring Element

#include <iostream>
using namespace std;

int oddOccuringElement(int nums[], int Size){
    int s = 0;
    int e = Size - 1;
    while(s <= e){
        int mid = s + (e - s) / 2;
        if((mid + 1 < Size && nums[mid] == nums[mid + 1]) || (mid - 1 >= 0 && nums[mid - 1] == nums[mid])){
            if(nums[mid] == nums[mid + 1]){
                if(mid % 2 == 0){
                    s = mid + 2;
                }
                else{
                    e = mid - 1;
                }
            }
            else if(nums[mid - 1] == nums[mid]){
                if((mid - 1) % 2 == 0){
                    s = mid + 1;
                }
                else{
                    e = mid - 2;
                }
            }
        }
        else{
            return nums[mid];
        }
    }
    return -1;
}

int main(){

    int arr[] = {7,1,1,3,3,5,5,6,6,7,7,8,8};
    int size = 13;

    int ans = oddOccuringElement(arr, size);

    cout << ans << endl;

    return 0;
}