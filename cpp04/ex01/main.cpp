#include "Animal.Class.hpp"
#include "Dog.Class.hpp"
#include "Cat.Class.hpp"
#include "WrongCat.Class.hpp"
#include "WrongAnimal.Class.hpp"

int main() 
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound! 
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* test2 = new WrongAnimal();
    const WrongAnimal* test = new WrongCat();

    std::cout << test->getType() << " " << std::endl;

    test->makeSound(); //will output the wrongcat sound! 
    test2->makeSound();    

    delete meta;
    delete i;
    delete j;
    delete test;
    delete test2;

    return 0;
}
