#include <iostream>

int main()
{
    int n, sum;
    std::cout << "Enter n:   ";
    std::cin >> n;

    sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    std::cout << sum;


    return 0;

}
