#include <Core/Animal.h>

std::string Dog::Go(int nTimes)
{
    std::string result;
    
    for (int i = 0; i < nTimes; ++i)
    {
        result += "woof! ";
    }

    return result;
}