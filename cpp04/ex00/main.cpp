#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
    const Animal *animal = new Animal();
    const Animal *cat = new Cat();
    const Animal *dog = new Dog();
    
    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    cat->makeSound(); // will output the cat sound!
    dog->makeSound();
    animal->makeSound();

    delete animal;
    delete dog;
    delete cat;    


    const WrongAnimal *wrongAnimal = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    const WrongAnimal *wrongDog = new WrongDog();

    std::cout << wrongCat->getType() << " " << std::endl;
    std::cout << wrongDog->getType() << " " << std::endl;
    wrongCat->makeSound(); 
    wrongDog->makeSound();
    wrongAnimal->makeSound();
}
