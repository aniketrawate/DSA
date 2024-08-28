#include <iostream>
using namespace std;


int hello(){
    cout << "hello" << endl;
    return 5;
}

int main(){

    hello();
    cout << hello() << endl;
    cout << "hello world!" << endl;

    return 0;
}