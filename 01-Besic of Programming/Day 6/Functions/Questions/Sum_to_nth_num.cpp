#include <iostream>
using namespace std;

int sum_till_nth(int num){
    int sum = 0;
    for(int i = 1; i <= num; i++){
        // sum = sum + i
        sum += i;
    }
    return sum;
}

int main(){
    
    int num_1;
    cout << "enter the no.:" << endl;
    cin >> num_1;
    cout << endl;
    cout << sum_till_nth(num_1) << endl;

    return 0;
}