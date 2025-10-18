#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, string> table;

    //insertion two ways
    //1
    table["in"] = "India";
    
    //2
    table.insert(make_pair("en", "England"));
    //or
    pair<string, string> p;
    p.first = "br";
    p.second = "Brazil";
    table.insert(p);

    cout << table.size() << endl; 

    cout << table.at("in") << endl;
    cout << table["en"] << endl;

    unordered_map<string, string>::iterator it = table.begin();

    while(it != table.end()){
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }


    return 0;
}