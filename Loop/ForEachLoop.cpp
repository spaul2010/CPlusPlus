// ForEachLoop.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 5, 7, 9, 11, 13};

    // Traditional for loop
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << endl;


    // New For Each loop - Introduced in C++ 11
    for (int a : arr)
    {
        cout << a << "\t";
    }
    cout << endl;
    cout << endl;
    

    // New For Each loop - Introduced in C++ 11
    for (auto a : arr)
    {
        cout << a << "\t";
    }
    cout << endl;
    cout << endl;


    // New For Each loop - Introduced in C++ 11
    for (auto &a : arr)
    {
        cout << a << "\t";
    }
    cout << endl;
    cout << endl;


    return 0;
}
