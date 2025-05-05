#include <iostream>
#include <iostream>
using namespace std;

int main(){

    vector<int> Temp1;

    vector<int> Temp2(5); // at start there will be 5 elements in vector which can be increased.

    vector<int> Temp3(10, 1); // created vector with 10 values defult element is 1 in all places.

    //Temp3.begin() is a location it cant give data stored at that place so we need to use * before themm to accsess data.
    cout << *Temp3.begin() << endl;

    Temp3.push_back(2);
    Temp3.push_back(3);
    Temp3.push_back(4);
    Temp3.push_back(5);

    cout << *Temp3.end() << endl;
    cout << Temp3[13] << endl;
    cout << Temp3.at(13) << endl;
    cout << Temp3.back() << endl;

    cout << Temp3.size() << endl;

    Temp3.pop_back();

    cout << Temp3.size() << endl;

    cout << Temp3.front() << endl;
    cout << Temp3.back() << endl;

    cout << "-------------------" << endl;

    cout << "capacity" << endl;
    cout << Temp3.capacity() << endl; //It is not empty
    cout << Temp2.capacity() << endl; //It is not empty, cause capacity is 5;
    cout << Temp1.capacity() << endl; //It is empty, capacity is 0;

    cout << "-------------------" << endl;

    cout << "if empty" << endl;
    cout << Temp3.empty() << endl; //It is not empty
    cout << Temp2.empty() << endl; //It is not empty, cause capacity is 5;
    cout << Temp1.empty() << endl; //It is empty, capacity is 0;

    cout << "-------------------" << endl;

    cout << "reserve()" << endl;
    vector <int> Temp4;
    
    cout << Temp4.capacity() << endl;
    Temp4.reserve(5);
    cout << Temp4.capacity() << endl;

    Temp4.push_back(1);
    Temp4.push_back(2);
    Temp4.push_back(3);
    Temp4.push_back(4);
    Temp4.push_back(5); 
    
    cout << Temp4.capacity() << endl;

    Temp4.push_back(6);

    cout << Temp4.capacity() << endl;
    // this tell us that
    // even if size of the vector is reserved to 5 if add more elemetns in it, it will double the size as before

    Temp4.reserve(4);
    cout << Temp4.capacity() << endl;
    // still this cant shirink the size of large to small we can make small size to large, but not opposite

    cout << Temp4.max_size() << endl;
    
    cout << "-------------------" << endl;

    cout << "clear()" << endl;

    Temp4.clear();
    
    cout << Temp4.capacity() << endl;
    cout << Temp4.size() << endl;

    vector<int> Temp5(10);
    cout << Temp5.capacity() << endl;
    Temp5.clear();
    cout << Temp5.capacity() << endl;

    // this clear() method is not working as anticipated;

    cout << "-------------------" << endl;

    vector<int> Temp6;
    Temp6.push_back(1);
    Temp6.push_back(2);
    Temp6.push_back(3);
    Temp6.push_back(4);
    Temp6.push_back(5);

    cout << Temp6[2] << endl;

    Temp6.insert(Temp6.begin(), 77);

    cout << Temp6[0] << " " << Temp6[2] << endl;
    cout << Temp6.size() << endl;
    // insert() method insert the given value at given location and seek upcoming values further changing ther indexes
    // can't give iterator as Temp[0] in insert() Method

    cout << "-------------------" << endl;
    cout << "erase()" << endl;

    vector<int> Temp7;

    Temp7.push_back(1);
    Temp7.push_back(2);
    Temp7.push_back(3);
    Temp7.push_back(4);
    Temp7.push_back(5);

    for(int i: Temp7){
        cout << i << " ";
    }
    cout << endl;
    
    cout << Temp7.size() << endl;

    Temp7.erase(Temp7.begin());
    cout << Temp7.size() << endl;
    cout << Temp7[0] << endl;

    for(int i: Temp7){
        cout << i << " ";
    }
    cout << endl;

    Temp7.erase(Temp7.begin()+2);

    for(int i: Temp7){
        cout << i << " ";
    }
    cout << endl;

    Temp7.erase(Temp7.begin(), Temp7.end());
    cout << Temp7.size() << endl;
    cout << Temp7[0] << endl; // this is showing 2 insted of 0 this is duet o that operator[] works differently, operator[] does not check boundaries. Use at() method for better answers it shoes error when used cause it check boundries

    //use this at() method
    //cout << Temp7.at(0) << endl;

    for(int i: Temp7){
        cout << i << " ";
    }
    cout << endl;

    cout << "-------------------" << endl;
    cout << "swap()" << endl;

    vector<int> Temp8;

    Temp8.push_back(1);
    Temp8.push_back(2);
    Temp8.push_back(3);
    Temp8.push_back(4);


    vector<int> Temp9;

    Temp9.push_back(11);
    Temp9.push_back(22);
    Temp9.push_back(33);
    Temp9.push_back(44);
    Temp9.push_back(55);
    Temp9.push_back(66);
    Temp9.push_back(77);
    Temp9.push_back(88);
    Temp9.push_back(99);
    Temp9.push_back(101);
    Temp9.push_back(102);

    Temp8.swap(Temp9);

    for(int i:Temp8) cout << i << " ";
    cout << endl;

    for(int i:Temp9) cout << i << " ";

    cout << "-------------------" << endl;
    cout << "for each loop" << endl;

    for(int i: Temp8) cout << i << " ";


     


    return 0;
}