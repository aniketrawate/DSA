#include <iostream>
using namespace std;

void function_1(int &num_2){ // here we passed &num_2 insted of num_1 doesent matter cause it is just name of variable but we are not declearing it from scrach we are just addresing meomory location that why & is used ie it is still refering to the same num_1 location just another name for that location is num_2
    num_2 = num_2 + 10; // this num_2 refers back to the same num_1 location
    cout << "functon_1 num_2:" << num_2 << endl;
}

int main(){

    int num_1 = 10;
    num_1++;
    function_1(num_1); // here this functon takes one argument ie num_1, this line passes this value to the above declered function_1 but above decleard funciton take the address of the variables as argument ie location of num_1 (&num_2) so change in decleard functon directly reflects on result in main function also, cause both are representing same locatio n
    num_1++;
    cout << "Main Funciton num_1:" << num_1 << endl;

    return 0;
}