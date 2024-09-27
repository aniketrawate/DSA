#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        cout << i << " ";
        if(i == (10 / 2)){
            break;
        }
        
        for (int j = 0; j < 1; j++) {
            
            int a = 10 - i;
            cout << a << ' '; 

        }
    }

    return 0;
}
