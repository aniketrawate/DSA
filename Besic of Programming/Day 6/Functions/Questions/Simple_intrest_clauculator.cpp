#include <iostream>
using namespace std;

int Simple_intrest(int principal, int intrest, int tenure){
    return ((principal * intrest * tenure)/100);

    cout << "principal: ";
    cin >> principal;
    cout << "intrest: ";
    cin >> intrest;
    cout << "tenure: ";
    cin >> tenure;

}

int main(){

    // int main_principal, main_intrest, main_tenure; // I can give the same name as above bet giving differnec so i can understand
    // cout << "principal: ";
    // cin >> main_principal;
    // cout << "intrest: ";
    // cin >> main_intrest;
    // cout << "tenure: ";
    // cin >> main_tenure;


    // cout << Simple_intrest(main_principal, main_intrest , main_tenure) << endl; 
    cout << Simple_intrest() << endl;
    return 0;
}