#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    vector<int> array = {1,2,3,4,5,6,7,8,9};
    int target = 7;

    bool ans = binary_search(array.begin(), array.end(), target);

    cout << ans << endl;

    return 0; 
}