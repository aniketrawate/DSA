#include <iostream>
using namespace std;

int main(){

    unordered_map<int, int> marks; // rollNo, marks

    marks[1] = 44;
    marks[2] = 47;
    marks[3] = 41;
    marks[4] = 49;

    // iterating in unordered_map
    
    // using for loop and iterator
    unordered_map<int, int>::iterator it;
    for(it = marks.begin(); it != marks.end(); it++){
        cout << it -> first << " : " << it -> second << endl;
    }

    cout << "************************************************************" << endl;
    
    // using for each loop
    for(auto it : marks){
        cout << it.first << " : " << it.second << endl;
    }

    cout << "************************************************************" << endl;

    // how to find in unordered_map

    if(marks.find(6) != marks.end()){
        cout << marks[2] << endl;
    }
    else{
        cout << "1.not found" << endl;
    }

    if(marks.find(3) != marks.end()){
        cout << marks[2] << endl;
    }
    else{
        cout << "2.not found" << endl;
    }

    cout << "************************************************************" << endl;

    // to delete 

    // marks.erase(4); it will delete the 4 key and its value pair



    return 0;
}