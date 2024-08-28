#include <iostream>
using namespace std;

int main(){

    int num = 14;
    int SetBitCount = 0;
    while(num != 0){
        if((num & 1) == 1){
            SetBitCount = SetBitCount + 1;
        }
        num = num >> 1;
    }
    cout << SetBitCount << endl;
    return 0;
}