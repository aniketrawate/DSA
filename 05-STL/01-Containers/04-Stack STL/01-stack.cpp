#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> st1;

    st1.push(10);
    //10
    st1.push(20);
    //10,20
    st1.push(30);
    //10,20,30
    st1.push(40);
    //10,20,30,40

    cout << st1.size() << endl;

    st1.pop();

    cout << st1.size() << endl;

    cout << st1.empty() << endl; // o/p in bool 0 or 1
    


    return 0;
}