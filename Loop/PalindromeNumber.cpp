// PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int reverseNumber(int n)
{
    int rev_n = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        rev_n = rev_n * 10 + rem;

        n /= 10;
    }
    return rev_n;
}


int main()
{
    int inp;
    cout << "Enter a number to check if Palindrome:  ";
    cin >> inp;

    (inp == reverseNumber(inp)) ? cout << inp << " is Palindrome." : cout << inp << " is NOT a Palindrome.";

    return 0;
}
