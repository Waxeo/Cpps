#include "Animal.Class.hpp"
#include "Dog.Class.hpp"
#include "Cat.Class.hpp"
#include "WrongCat.Class.hpp"
#include "WrongAnimal.Class.hpp"

int main() 
{
    const Animal **j = NULL;

    for (int i = 0; i < 100; i++)
    {
        if (i < 50)
            j[i] = new Dog();
        else 
            j[i] = new Cat();
    }
    
    for (int i = 0; i < 100; i++)
        delete j[i];

    return 0;
}

/*
Une copie superficielle (shallow copy),
ne crée qu'une nouvelle référence à l'objet original, 
mais pas aux objets qu'il contient. 
Cela signifie que si l'objet original contient des références 
à d'autres objets (par exemple, des listes ou d'autres objets),
une copie superficielle ne copiera que ces références,
pas les objets réels. Ainsi, les modifications apportées à ces 
objets à travers la copie seront visibles dans l'objet original.

En revanche, une copie profonde (deep copy),
crée une nouvelle instance de l'objet original ainsi que
des copies indépendantes de tous les objets qu'il contient.
Ainsi, toute modification apportée à ces objets dans la copie
ne modifiera pas l'objet original.

/////Copie superficielle/////	
1.	Lorsque nous créons une copie d’un objet en copiant
les données de toutes les variables membres telles quelles,
cela s’appelle une copie superficielle 

2.	Une copie superficielle d’un objet copie toutes les
valeurs du champ membre.	

3.	En copie superficielle, les deux objets ne sont pas
indépendants	

4.	Il crée également une copie des objets alloués
dynamiquement	

/////Copie profonde//////
1.	Lorsque nous créons un objet en copiant les données d’un
autre objet avec les valeurs des ressources mémoire qui
résident en dehors de l’objet, cela s’appelle une copie profonde

2.  La copie en profondeur est effectuée en implémentant notre
propre constructeur de copie.

3.  Il copie tous les champs et fait des copies de la mémoire
allouée dynamiquement pointée par les champs

4.  Si nous ne créons pas la copie complète de manière légitime,
la copie pointera vers l’original, avec des conséquences
désastreuses.

*/