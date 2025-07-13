#include <iostream>
#include <deque>

using namespace std;

int main(){

    deque<int> dq1;

    dq1.push_back(10);
    //10
    dq1.push_back(20);
    //10,20
    dq1.push_back(30);
    //10,20,30
    dq1.push_front(100);
    //100,10,20,30
    dq1.push_front(200);
    //200,100,10,20,30
    dq1.push_front(300);
    //300,200,100,10,20,30

    dq1.pop_back();
    //300,200,100,10,20

    dq1.pop_front();
    //200,100,10,20

    cout << dq1.size() << endl;
    cout << dq1.front() << endl;
    cout << dq1.back() << endl;

    deque<int> :: iterator it = dq1.begin();

    while(it != dq1.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}