#include "string.h"

int main()
{
    std::cout<<"Enter your name: ";
    std::getline(std::cin, name);

    name.erase(0,3);
    std::cout<<name<<std::endl;
    return 0;
}