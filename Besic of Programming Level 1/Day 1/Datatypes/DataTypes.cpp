#include <iostream>
#include <iomanip> // Include this for std::setprecision
using namespace std;

int main()
{

    // these all are the primitive data types
    // void is not yet covered

    int age = 21;

    float pi = 3.14;

    double fraction = 3.33333;

    char alphabet = 'a';

    bool state = true;

    cout << "int has:" << endl;
    cout << age << endl;
    cout << "size " << sizeof(age) << endl;
    cout << endl;

    cout << "float has:" << endl;
    cout << pi << endl;
    cout << "size " << sizeof(pi) << endl;
    cout << endl;

    cout << "double has:" << endl;
    cout << fraction << endl;
    cout << "size " << sizeof(fraction) << endl;
    cout << endl;

    cout << "char has:" << endl;
    cout << alphabet << endl;
    cout << "size " << sizeof(alphabet) << endl;
    cout << endl;

    cout << "bool has:" << endl;
    cout << state << endl;
    cout << "size " << sizeof(state) << endl;
    cout << endl;

    //***************************************

    double compressed = 7.46436357537;
    cout << compressed << endl;
    // when printed it will get compressed to defult state of disly but value which variable hold will be exacly exual to what we have given

    // this is how we can set the pricision which we need to show when cout is used
    // to use this we need to use the header file <iomanip>
    double not_compressed = 4.47635636373;
    cout << setprecision(17) << endl;
    cout << not_compressed << endl;

    return 0;
}