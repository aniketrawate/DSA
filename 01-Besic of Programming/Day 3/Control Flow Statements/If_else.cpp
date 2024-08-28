#include <iostream>
using namespace std;

int main(){

    int budget = 2000000;
    cout << "Enter your Budget" << endl;

    cin >> budget;

    // this is only a if statement

    // if (budget >= 2000000){
    //     cout << "You can buy scorpio" << endl;
    // }

    // Now let's if else statements

    if (budget >= 2000000){
        cout << "You can buy Scorpio" << endl;
    }
    else{
        cout << "You can't buy Scorpio";
    }

    return 0;
}