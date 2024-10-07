#include <iostream>
using namespace std;

int main(){
    int SizeOfMatrix = 5;
    for(int i = 0; i < SizeOfMatrix; i++){
        for(int j = 0; j < SizeOfMatrix; j++){
            if(i == j){
                cout << " k";
            }
            else{
                cout << " " << 0;
            }
        }
        cout << endl;
    }

}