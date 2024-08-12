#include <iostream>
using namespace std;

double AreaOfCircle(int radius){
    double pi = 22.0/7.0;
    double area = pi*(radius*radius);
    return area;
}

int main(){

    int Radius;
    cout << "enter the radius: ";
    cin >> Radius;
    cout << "area is: " << AreaOfCircle(Radius) << " sq units" << endl;

    return 0;
}