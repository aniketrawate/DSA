#include <iostream>
using namespace std;

int main(){

    int marks;
    cout << "Enter the Marks: " << endl; 
    cin >> marks;

    if(marks >= 90 ){
        cout << "first class" << endl;
    }
    else if(marks >= 80){
        cout << "second class" << endl;
    }
    else if(marks >= 70){
        cout << "third class" << endl;
    }
    else if(marks >= 60){
        cout << "fourth class" << endl;
    }
    // we can also use else in else if statements
    else{
        cout << "you faild" << endl;
    }


    return 0;
}