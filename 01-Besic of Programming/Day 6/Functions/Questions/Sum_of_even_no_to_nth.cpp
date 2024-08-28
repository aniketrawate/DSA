#include <iostream>
using namespace std;

int sum_of_even_nums(int num){
    int sum = 0;
    for(int i = 1; i <= num; i++){
        if( i % 2 == 0){
            sum = sum + i;
        }
    }
    return sum;

}

int main(){

    int Num;
    cout << "Enter Number:" << endl;
    cin >> Num;
    
    cout << sum_of_even_nums(Num) << endl;

    return 0;
}