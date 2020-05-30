#include <iostream>

int main()
{
    int n, factorial = 1;
    std::cout << "Enter n:   ";
    std::cin >> n;


    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    std::cout << "factorial of " << n << " is = " << factorial;

    return 0;

}
