#include <iostream>
using namespace std;

float km_to_miles(float km){
    float _1_km_in_miles = 0.621371;
    float miles = km * _1_km_in_miles;
    return miles;
}

int main(){
    float KM;
    cout << "enter the Km:";
    cin >> KM;
    cout << km_to_miles(KM) << endl;

    return 0;
}