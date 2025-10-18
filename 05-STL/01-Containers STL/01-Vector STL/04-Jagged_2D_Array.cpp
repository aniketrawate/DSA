#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<vector <int> > Arr1 (4);

    Arr1[0] = vector<int> (4);
    Arr1[1] = vector<int> (2);
    Arr1[2] = vector<int> (5);
    Arr1[3] = vector<int> (3);
    // this will create empty jagged array

    // Or there is another way to do this with giving values

    // this below code is not working due to the older c++ standard my mac is using which is c++98 and tried to update it to c++17 but it was not working so commented this
    // vector<vector<int>> Arr2 = {
    //     {1,1,1,1},
    //     {1,1},
    //     {1,1,1,1,1},
    //     {1,1,1}
    // };
    // this will create a jagged array with 1 as all values.

    // this will create a 2D vector with sturcture
    // _ _ _ _
    // _ _
    // _ _ _ _ _
    // _ _ _


    int Row = Arr1.size();
    
    // for each col
    for(int i = 0; i < Arr1.size(); i++){
        int Col = Arr1[i].size();
        cout << "Row " << i << " has " << Col << " Columns" << endl;
    }
    // this is how we can create a 2D vector and find Rows and Columns
    

    return 0;
}