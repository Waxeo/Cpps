#include "BitcoinExchange.hpp"

// etapes a suivre en theorie :

// recuperer dans le fichier transmit le date | multiplicateur en verifiant : validite de la date, et du multiplicateur
// defiler le 2eme map pour associer les dates avec map premier et envoyer ca a l'affichage


BitcoinExchange::BitcoinExchange( void )
{
    //algo recuperation data.csv

    std::ifstream ifs;
    int           line = 0;
    ifs.open("data.csv");
    if (!ifs.is_open())
    {
        std::cout << "Failed to open the data file" << std::endl;
        return ;
    }

    std::string copy;

    while (std::getline(ifs, copy))
    {
    	if (line != 0)
		{
			std::size_t coma = copy.find(",");

			std::string date;
			float price = 0.0f;
			
  			if (coma != std::string::npos) 
			{
				date = copy.substr(0, coma);
				std::string value2 = copy.substr(coma + 1);
				price = static_cast<float>(std::atof(value2.c_str()));
			}

			this->_BitcoinData.insert(std::make_pair(date, price));
		}
        line++;
	}


    ifs.close();
    return ;
}

BitcoinExchange::~BitcoinExchange( void )
{
    return ;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &src )
{
    *this = src;
    return ;
}

BitcoinExchange	&	BitcoinExchange::operator=( BitcoinExchange const &rhs )
{
	(void)rhs;
    return *this;
}


void	BitcoinExchange::extractAndExec(char *fdsName)
{
    std::ifstream ifs;
    int           line = 0;
    ifs.open(fdsName);
    if (!ifs.is_open())
    {
        std::cout << "Failed to open the input file" << std::endl;
        return ;
    }

    std::string copy;

    while (std::getline(ifs, copy))
    {		
    	if (line != 0)
		{
			std::size_t sep = copy.find("|");

			std::string date;
			float exchangeRate = 0.0f;

  			if (sep != std::string::npos) 
			{
				date = copy.substr(0, sep - 1);
				std::string value2 = copy.substr(sep + 2);
				if (value2.size() > 5)
        			std::cerr << "Exchange rate lower than 0 or higher than 1000." << std::endl;
				else
				{
					exchangeRate = static_cast<float>(std::atof(value2.c_str()));
					this->OutputManagement(date, exchangeRate);
				}
				// if (!isdigit(value2))
					// throw badvalueexception
				
			}
			if (sep == std::string::npos)
        		std::cerr << "Problem in input file." << std::endl;
		}
        line++;
	}

    ifs.close();
    return ;
}

void	BitcoinExchange::OutputManagement(std::string date, float value)
{
	if (value < 0 || value > 1000)
	{
        std::cerr << "Exchange rate lower than 0 or higher than 1000." << std::endl;
		return ;
	}

    std::map<std::string, float>::iterator it = this->_BitcoinData.lower_bound(date);

    if (it == this->_BitcoinData.begin())
	{
        std::cerr << "There is no data before 2009-01-02." << std::endl;
        return ;
    }
	else if (it == this->_BitcoinData.end())
        --it;
	else 
	{
        if (it->first != date && it != this->_BitcoinData.begin())
            --it;
    }

	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
}







/*	DEBUG
	for (std::map<std::string, float>::iterator it = this->_BitcoinData.begin(); it != this->_BitcoinData.end(); ++it) {

		std::cout << "Première variable : " << it->first << std::endl;

		std::cout << "Deuxième variable : " << it->second << std::endl;

		// Passage au maillon suivant
		std::cout << std::endl;  
    }
*/