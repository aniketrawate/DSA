#include <iostream>
using namespace std;

void ShiftArrayBy_n(int Array[], int SizeOfArray, int Shift)
{
    int FinalShift = Shift % SizeOfArray;

    // cheack if Final shift is 0
    if (FinalShift == 0)
    {
        return;
    }

    // Step1: copy last FinalShift element form Array to TempArray
    int TempArray[9999];
    int Index = 0; // To track coping in TempArray
    // Storing last array element in tempArray
    for (int i = SizeOfArray - FinalShift; i < SizeOfArray; i++)
    {
        TempArray[Index] = Array[i];
        Index++;
    }

    // Step2: Shift Array elements by FinalShift

    for (int i = SizeOfArray - 1; i >= FinalShift; i--)
    {
        Array[i] = Array[i - FinalShift];
    }

    // Step3: Copy TempArray as it in Array

    for (int i = 0; i < FinalShift; i++)
    {
        Array[i] = TempArray[i];
    }
}

int main()
{

    int Array1[] = {10, 20, 30, 40, 50, 60};
    int SizeOfArray1 = 6;
    int Shift1 = 53;

    // Print Array
    cout << "Before Shifting" << endl;
    for (int i = 0; i < SizeOfArray1; i++)
    {
        cout << Array1[i] << ",";
    }
    cout << endl;

    ShiftArrayBy_n(Array1, SizeOfArray1, Shift1);

    // Print Array
    cout << "After Shifting" << endl;
    for (int i = 0; i < SizeOfArray1; i++)
    {
        cout << Array1[i] << ",";
    }

    return 0;
}