// Given two integers one is a dividend and the other is the divisor, we need to find the quotient when the dividend is divided by the divisor without the use of any ” / “ and ” % “ operators

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333… which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5
#include<iostream>
using namespace std;

int getQuotient(int divident, int divisor){
    int Divident = abs(divident);
    int Divisor = abs(divisor);
    bool isNegative = (divident < 0) ^ (divisor < 0);
    int s = 0;
    int e = Divident;
    int ans = 0;
    while(s<=e){
        int mid = s + ((e - s) >> 1);
        if(Divisor * mid == Divident){
            return mid;
        }
        else if(Divisor * mid < Divident){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return isNegative ? -ans : ans;

}

int main(){

    int divident = -11;
    int divisor = -7;

    int ans = getQuotient(divident, divisor);

    cout << ans << endl;


    return 0;
}