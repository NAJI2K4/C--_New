#include "loop.h"

int main()
{
    while(name.empty())
    {
    std::cout<<"Enter your name:";
    std::getline(std::cin, name);
    }

    std::cout<<"Hello "<<name<<"!"<<std::endl;

    return 0;

}