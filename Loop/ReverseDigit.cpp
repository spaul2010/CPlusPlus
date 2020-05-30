// ReverseDigit.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int main()
{
    int n, rem;
   
    cout << "Enter the number: ";
    cin >> n;

    while (n > 0)
    {
        rem = n % 10;
        std::cout << rem << endl;

        n /= 10;

    }

    return 0;
}

