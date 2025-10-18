#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    unordered_set<int> st;

    st.insert(2);
    st.insert(5);
    st.insert(4);
    st.insert(9);

    unordered_set<int>::iterator it = st.begin();
    
    while(it != st.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << st.size() << endl;

    return 0;
}