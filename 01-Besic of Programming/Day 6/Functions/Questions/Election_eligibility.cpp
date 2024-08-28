#include <iostream> 
using namespace std;

void eligibility_for_vote(int age){
    cout << "enter you'r age: ";
    cin >> age;
    if(age < 18){
        cout << "you'r not Eligiable for vote" << endl;
    }
    else{
        cout << "you'r eligiable for vote" << endl;
    }
}


int main(){

    int age;
    eligibility_for_vote(age);

    return 0;
}