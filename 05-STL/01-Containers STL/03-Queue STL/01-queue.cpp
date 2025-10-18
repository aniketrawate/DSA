#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue<int> que1;

    que1.push(10);
    //10
    que1.push(20);
    //10,20
    que1.push(30);
    //10,20,30
    que1.push(40);
    //10,20,30,40

    cout << que1.size() << endl;

    que1.pop();

    cout << que1.front() << endl;
    cout << que1.back() << endl;

    return 0;
}