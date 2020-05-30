/*
program for finding a perfect number

Perfect Number definition - 
    Number              =   8
    Factors of 8        =   1 2 4 8
    sum of all factors  =   1+2+4+8 = 15

    Perfect Number      = True,   if   (2 * Given number) == (sum of all factors)

    Perfect Number example = 28, 496 etc.
*/

#include <iostream>

int main()
{
    int n, sum=0;
    std::cout << "Enter n:   ";
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    if (2 * n == sum)
    {
        std::cout << n << " is a perfect number\n";
    }
    else
    {
        std::cout << n << " is not a perfect number\n";
    }
    return 0;

}
