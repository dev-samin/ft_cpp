#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();

	cat->makeSound();
	dog->makeSound();
	delete cat;
}