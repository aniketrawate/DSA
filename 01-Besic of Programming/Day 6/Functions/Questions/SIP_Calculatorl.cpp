#include <iostream>
using namespace std;

int SIP_Calculator(int monthly_amount,float rate_of_return, int tenure){
    return (((monthly_amount * 12) + ((monthly_amount * 12)*(rate_of_return/100))) * tenure);
}

int main(){

    int Monthly_amount, Tenure;
    float Rate_of_return;
    cout << "enter monthly amount:";
    cin >> Monthly_amount;
    cout << "Rate_of_return:";
    cin >> Rate_of_return;
    cout << "Tenure:";
    cin >> Tenure;

    cout << SIP_Calculator(Monthly_amount, Rate_of_return, Tenure) << endl;

    return 0;
}