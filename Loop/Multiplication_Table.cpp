#include <iostream>

int main()
{
    int n;
    std::cout << "Enter n:   ";
    std::cin >> n;


    for (int i = 0; i <= 10; i++)
    {
        std::cout << n << " x " << i << " =  " << n * i;
        std::cout << std::endl;
    }

    return 0;

}
