#include <iostream>
using namespace std;

int main(){

    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 10; j++){
    //         if(i == 0 || i == 4){
    //             cout << " *";
    //         }
    //         else{
    //             if(j == 0 || j == 9){
    //                 cout << " *";
    //             }
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }

    int rows = 5;
    int collumns = 10;

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < collumns; j++){
            if(i == 0 || i == (rows-1)){
                cout << " *";
            }
            else{
                if(j == 0 || j == (collumns-1)){
                    cout << " *";
                }
                else{
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }


    return 0;
}