#include <iostream>
using namespace std;

int sum_even_in_range(int num_1, int num_2){
    int sum = 0;
    for(;num_1 <= num_2; num_1++){
        if(num_1 % 2 == 0){
            sum += num_1;
        }
    }
    return sum;

}

int main(){

    int Num_1, Num_2;
    cout << "enter the lower bound num:" << endl;
    cin >> Num_1;
    cout << "enter the hight bound num:" << endl;
    cin >> Num_2;

    cout << sum_even_in_range(Num_1, Num_2) << endl;

    return 0;
}