#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> Temp1;

    Temp1.push_back(11);
    Temp1.push_back(22);
    Temp1.push_back(33);
    Temp1.push_back(44);
    Temp1.push_back(55);
    Temp1.push_back(66);
    Temp1.push_back(77);
    Temp1.push_back(88);
    Temp1.push_back(99);
    Temp1.push_back(101);
    Temp1.push_back(102);


    // Iterator

    vector<int>::iterator it = Temp1.begin();

    while(it != Temp1.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    return 0;
}