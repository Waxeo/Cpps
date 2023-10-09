#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include "DiamondTrap.Class.hpp"

 int        main(void) 
 { 
         DiamondTrap        tic("Tic"); 
         DiamondTrap        tic2("Truc"); 
  
         tic2 = tic; 
         DiamondTrap        tic3(tic); 
  
         std::cout << "\nTic playing\n"; 
        //  tic.whoAmI(); 
         tic.attack("Tac"); 
         tic.FragTrap::takeDamage(7); 
         tic.ScavTrap::beRepaired(2); 
         tic.FragTrap::takeDamage(5); 
         tic.attack("Toc"); 
         tic.attack("Tuc"); 
         tic.FragTrap::takeDamage(33); 
         tic.attack("Tac"); 
         tic.ScavTrap::beRepaired(42); 
  
  
         std::cout << "\nTic2 playing\n"; 
        //  tic2.whoAmI(); 
         tic2.attack("Tic"); 
         tic2.attack("Tac"); 
         tic2.attack("Toc"); 
         tic2.attack("Tic"); 
         tic2.attack("Tac"); 
         tic2.attack("Toc"); 
         tic2.attack("Tic"); 
         tic2.attack("Tac"); 
         tic2.attack("Toc"); 
         tic2.attack("Tic"); 
  
         tic2.FragTrap::takeDamage(42); 
         tic2.highFivesGuys(); 
         tic2.guardGate(); 
        //  tic2.whoAmI(); 
  
         tic2.attack("Tac"); 
         tic2.FragTrap::takeDamage(42); 
         tic2.attack("Toc"); 
         tic2.attack("Tic"); 
         tic2.FragTrap::takeDamage(42); 
         tic2.attack("Tac"); 
  
  
         std::cout << "\nTic3 playing\n"; 
        //  tic3.whoAmI(); 
         tic3.FragTrap::takeDamage(90); 
         tic3.ScavTrap::beRepaired(90); 
         tic3.FragTrap::takeDamage(42); 
         tic3.ScavTrap::beRepaired(42); 
         return (0); 
 }