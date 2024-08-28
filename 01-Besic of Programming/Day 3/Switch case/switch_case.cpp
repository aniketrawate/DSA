#include <iostream>
using namespace std;

int main()
{

    char grade;
    cout << "enter your grade:" << endl;
    cin >> grade;

    // if(grade == 'A'){
    //     cout << "First class" << endl;
    // }
    // else if(grade == 'B'){
    //     cout << "Second class" << endl;
    // }
    // else if(grade == 'C'){
    //     cout << "Third class" << endl;
    // }
    // else if(grade == 'D'){
    //     cout << "Fourth class" << endl;
    // }
    // else{
    //     cout << "Faild" << endl;
    // }

    // the above code we can write in short using switch case

    switch (grade)
    { // switch("expression") , so grade is expression here
    case ('A'):
        cout << "First class" << endl;
        break;

    case ('B'):
        cout << "Second class" << endl;
        break;

    case ('C'):
        cout << "Second class" << endl;
        break;

    case ('D'):
        cout << "Third class" << endl;
        break;

    default:
        cout << "Faild" << endl; // this line works exactly like else statement

        // we cant use switch case every time there are some rules or properties when using this
        //
        // 1. Expression type: here we can only use some type of sexpressions like
        // in expression we can use int, char, enum, etc.
        // we can't use float, string, etc.
        //
        // 2. Unique case value: evey case should have unique value
        //
        // 3. no range cheking: we can't use vlues in the range format
        // eg. case(age > 23): <= this is not allowed in case values
        //
        // 4. Don't forget to use breake: other wise it will not stop and continue to
        // the flow to next case and multiple cases can be exicuted
    }
    return 0;
}