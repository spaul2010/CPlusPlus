#include <iostream>

int main()
{
    std::string str;

    // Take user input; This method stops when it finds a space
    std::cout << "Please enter your name:  ";
    std::cin >> str;
    std::cout << "Hello " << str << std::endl;

}
