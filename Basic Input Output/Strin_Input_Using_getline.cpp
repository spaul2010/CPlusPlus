#include <iostream>
#include <string>

int main()
{
    std::string str;

    std::cout << "Please enter your name:  ";
    
    getline(std::cin, str);
    
    std::cout << "Hello " << str << std::endl
              << "welcome to Github !\n";



}
