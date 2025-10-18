#include <iostream>
#include <queue>
using namespace std;

int main(){

    //min-heap -> minimum value -> highest priority
    //creation
    priority_queue<int, vector<int>, greater<int> > pq;

    pq.push(5);
    pq.push(9);
    pq.push(4);
    pq.push(33);
    pq.push(3);
    //top element will be the one with hight priority 

    cout << pq.top() << endl;
    //3

    pq.pop();
    //3 will be pop

    cout << pq.top() << endl;
    //4

    cout << pq.size() << endl;


    return 0;
}