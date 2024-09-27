#include <iostream>
using namespace std;

void CountZerosAndOnes(int array1[], int SizeOfArray)
{
    int ZerosCounter = 0;
    int OnesCounter = 0;
    for (int i = 0; i < SizeOfArray; i++)
    {
        if (array1[i] == 0)
        {
            ZerosCounter += 1;
        }
        else if (array1[i] == 1)
        {
            OnesCounter += 1;
        }
    }
    cout << "Count of Zeros in Array: " << ZerosCounter << endl;
    cout << "Count of Ones in Array: " << OnesCounter << endl;
}

int main()
{

    int array1[] = {1, 0, 0, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1};
    int SizeOfArray = 19;
    CountZerosAndOnes(array1, SizeOfArray);

    for (int i = 0; i < 25; i++)
    {
        cout << array1[i] << endl;
    }
    // Why there are extra 1 in the array if i print 25 elements

    return 0;
}