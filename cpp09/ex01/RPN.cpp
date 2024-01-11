#include "RPN.hpp"

//parsing 
// verifier que il y'a bien 2 chiffres avant un premier operateur
// verifier qu'une string ne contient bien que 1 element numerique ou operateur
// verifier qu'il y'a bien au moins un operateur
// ...

RPN::RPN( char **operation)
{
    int i = 1;
    std::string input = operation[1];
    size_t pos = 0;
    std::string token;
    
    while ((pos = input.find(' ')) != std::string::npos) {
        token = input.substr(0, pos);
        std::cout << token << std::endl;
        input.erase(0, pos + 1);
    }

    // Affichage du dernier élément (après le dernier espace)
    std::cout << input << std::endl;

    while (operation[i])
    {
        if (operation[i][0] >= '0' && operation[i][0] <= '9')
            this->_calcul.push(std::atoi(operation[i]));
        else
        {
            switch (operation[i][0])
            {
                case '+':
                    plus();
                    break ;

                case '-':
                    minus();
                    break ;

                case '*':
                    mult();
                    break ;

                case '/':
                    div();
                    break ;
                default:
                    std::cout << "This level does not exist" << std::endl;

            }
        }
        i++; 
    }

    int res = 0;

    if (!_calcul.empty())
    {
        res = _calcul.top();
        _calcul.pop();
    }
    if (!_calcul.empty())
    {
        //exception
    }

    std::cout << res << std::endl;
}


RPN::~RPN( void )
{
    return ;
}

void    RPN::plus( void )
{
    int right = 0;
    int left = 0;

    if (!_calcul.empty())
    {
        right = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    if (!_calcul.empty())
    {
        left = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    int res = left + right;

    _calcul.push(res);
}

void    RPN::minus( void )
{
    int right = 0;
    int left = 0;
    
    if (!_calcul.empty())
    {
        right = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    if (!_calcul.empty())
    {
        left = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    int res = left - right;

    _calcul.push(res);
}

void    RPN::mult( void )
{
    int right = 0;
    int left = 0;
    
    if (!_calcul.empty())
    {
        right = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    if (!_calcul.empty())
    {
        left = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    int res = left * right;

    _calcul.push(res);
}

void    RPN::div( void )
{
    int right = 0;
    int left = 0;
    
    if (!_calcul.empty())
    {
        right = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    if (!_calcul.empty())
    {
        left = _calcul.top();
        _calcul.pop();
    }
    else
    {
        //exception
    }
    
    int res = left / right;

    _calcul.push(res);
}