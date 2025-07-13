#include <iostream> 
#include <queue>
using namespace std;

int main(){

    //creation 
    priority_queue<int> pq;
    // max-heap -> maximum value -> highest priority (default)

    pq.push(5);
    pq.push(9);
    pq.push(4);
    pq.push(33);
    pq.push(3);
    //top element will be the one with hight priority 

    cout << pq.top() << endl;
    //33

    pq.pop();
    //33 will be pop

    cout << pq.top() << endl;
    //9

    cout << pq.size() << endl;


    return 0;
}