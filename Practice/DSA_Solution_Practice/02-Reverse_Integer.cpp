#include <iostream>
using namespace std;

int Reverse(int x){
    int ans = 0;
    while(x != 0){
        if((ans > INT_MAX / 10) || (ans < INT_MIN / 10)){
            return 0;
        }
        int unit = x % 10;
        ans = (ans * 10) + unit;
        x = x / 10;
    }
    return ans;
};

int main(){

    return 0;
}