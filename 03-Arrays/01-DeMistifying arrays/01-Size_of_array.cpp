#include <iostream>
using namespace std;

int main(){

    int arr_1[5] = {1,2,3,4,5};
    int arr_2[5] = {34};

    cout << sizeof(arr_1) << endl;
    cout << sizeof(arr_2) << endl;
    // both have the same size dispite elemnts initaization

    cout << arr_1[2] << endl; // find datatype like this
        
    // it will give the size of elemnt in array 
    cout << "size of each element in arr_1: " <<sizeof(arr_1[0]) << endl;

    // total elements in arr_1
    cout << "elements in arr_1: " << sizeof(arr_1) / sizeof(arr_1[0]) << endl;

    // CONCLUSION
    // To find the size of arry or how much elemnts array hods is possible by above method
    // if you need to find how much non zero elemnts are the in arry then it can be done diff way
    // to keep the track non zero elements in array we need to maintain a varable whick keep tradck of no of nono zero elemrnt in arry
    // we are saying nonzero cause if we put even single elemnt in arry, automatically in remaing places become zero 

    // IMP
    // ie. they are filled but with not our inputs that way it is a question to find no of nonzero elemnts in arry 

    cout << arr_1 << endl;
    cout << arr_2[3] << endl;

    return 0;
}