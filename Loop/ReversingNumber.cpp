// ReversingNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int reverseNumber(int n)
{
	int org_n, rem, rev_number = 0;
	org_n = n;
	while (n > 0)
	{
		rem = n % 10;
		rev_number = rev_number * 10 + rem;

		n /= 10;
	}

	return rev_number;

}

int main()
{
	int n, rev_n;
	cout << "Enter a number: ";
	cin >> n;

	rev_n = reverseNumber(n);
	cout << "Reversed Number is = " << rev_n;

	return 0;

}
