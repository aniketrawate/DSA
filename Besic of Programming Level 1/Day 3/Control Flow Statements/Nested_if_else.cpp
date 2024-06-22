#include <iostream>
using namespace std;

int main(){

    int weight, height;
    cout << "enter weight:" << endl;
    cin >> weight;
    cout << "enter height:" << endl;
    cin >> height;

    if(weight < 81 && weight > 60){
        if(height < 7 && height > 5){
            cout << "your BMI could be Good" << endl;
        }
        else{
            cout << "Need to gain height, if possible" << endl;
        }
    }
    else if(weight >= 81){
        cout << "need to reduce weight" << endl;
    }
    else{
        cout << "need to gain weight" << endl;
    }

    return 0;
}