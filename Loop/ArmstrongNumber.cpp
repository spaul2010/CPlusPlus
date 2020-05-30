// ArmstrongNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

int checkArmstrongNumber(int n)
{
    int rem, sum=0;
    int org_n = n;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n /= 10;
    }

    if (sum == org_n)
        return true;
    else
        return false;
}

int main()
{
    for (unsigned int i = 0; i < 20000; i++)
    {
        
        checkArmstrongNumber(i) ? cout << "\t\t"<<i << " is Armstrong Nuber." << endl : cout<<"";

    }
}
