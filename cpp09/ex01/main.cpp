#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac >= 4)
    {
        try
        {
           RPN rpn(av);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}