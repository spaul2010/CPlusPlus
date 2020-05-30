/*
program for finding factors of a number
*/

#include <iostream>

int main()
{
    int n, factors;
    std::cout << "Enter n:   ";
    std::cin >> n;


    std::cout << "Factors for " << n << " is = ";
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            std::cout << i<<" ";
        }
    }

    std::cout << std::endl;
    return 0;

}
