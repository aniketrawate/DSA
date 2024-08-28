#include <iostream>
using namespace std;

// write a function to "print" the sum of three no.
void sum_of_three_void(int a, int b, int c)
{
    cout << (a + b + c) << endl;
}

// write a function to "return" the sum of three no.
int sum_of_three_int(int a, int b, int c)
{
    return (a + b + c);
}

int main()
{

    sum_of_three_void(4, 6, 8); // here i cant use cout cause this function is not returning anything it is void so just call it.
    cout << "--------anothe way--------" << endl;
    cout << sum_of_three_int(3, 6, 7) << endl;

    return 0;
}