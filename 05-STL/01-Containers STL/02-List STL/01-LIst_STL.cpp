#include <iostream>
#include <list>

using namespace std;

int main(){

    list <int> MyLis1;

    // Member Functions

    // push_back()
    MyLis1.push_back(10);
    MyLis1.push_back(20);
    MyLis1.push_back(30);
    MyLis1.push_back(40);
    MyLis1.push_back(50);
    // 10,20,30,40,50

    // push_font()
    MyLis1.push_front(100);
    MyLis1.push_front(200);
    // 200,100,10,20,30,40,50

    // begin()
    list <int>::iterator it1 = MyLis1.begin();

    // end()
    while(it1 != MyLis1.end()){
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;

    // pop_back()
    MyLis1.pop_back();
    // 200,100,10,20,30,40

    list <int>::iterator it2 = MyLis1.begin();
    while(it2 != MyLis1.end()){
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    // pop_front()
    MyLis1.pop_front();
    //100,10,20,30,40

    list <int>::iterator it3 = MyLis1.begin();
    while(it3 != MyLis1.end()){
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    cout << MyLis1.size() << endl;

    //empty()
    cout << "empty check" << endl;
    cout << MyLis1.empty() << endl;

    //clear()
    MyLis1.clear();

    cout << "empty check" << endl;
    cout << MyLis1.empty() << endl; 

    cout << MyLis1.size() << endl;

    cout << "----- this is the fornt() and back()" << endl;
    //front() //back()
    list <int> Mylist2;

    Mylist2.push_back(10);
    Mylist2.push_back(20);
    Mylist2.push_back(30);
    Mylist2.push_back(40);
    Mylist2.push_back(50);
    // 10,20,30,40,50

    cout << Mylist2.front() << endl;
    cout << Mylist2.back() << endl;

    cout << "------remove()---------" << endl;
    
    Mylist2.push_back(40);
    // 10,20,30,40,50,40

    //remove()
    Mylist2.remove(40);
    
    list <int>::iterator it4 = Mylist2.begin();
    while(it4 != Mylist2.end()){
        cout << *it4 << " ";
        it4++;
    }
    cout << endl;


     




    return 0;
}