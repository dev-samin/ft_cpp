#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *dog = new Dog(); 
	std::cout << std::endl;
	const Animal *cat = new Cat();
	std::cout << std::endl;

	dog->makeSound();
	cat->makeSound();
	delete dog;
	std::cout << std::endl;
	delete cat;
	std::cout << std::endl;
	std::cout << "--------------------------" << std::endl;


	Animal *meta[10];

	for(int i = 0; i < 5; i++)
	{
		meta[i] = new Dog();
	}

	for(int i = 5; i < 10; i++)
	{
		meta[i] = new Cat();
	}
	
	std::cout << &dynamic_cast<Dog *>(meta[0])->getBrain() << dynamic_cast<Dog *>(meta[0])->getBrain().getIdea(0) << std::endl;
	dynamic_cast<Dog *>(meta[0])->getBrain().setIdea(0, "dog_world");
	std::cout << &dynamic_cast<Dog *>(meta[0])->getBrain() << dynamic_cast<Dog *>(meta[0])->getBrain().getIdea(0) << std::endl;

	std::cout << &dynamic_cast<Cat *>(meta[5])->getBrain() << dynamic_cast<Cat *>(meta[5])->getBrain().getIdea(0) << std::endl;

	dynamic_cast<Cat *>(meta[5])->getBrain().setIdea(0, "cat_world");
	std::cout << &dynamic_cast<Cat *>(meta[5])->getBrain() << dynamic_cast<Cat *>(meta[5])->getBrain().getIdea(0) << std::endl;
	
	for (int i = 0; i < 10; i++)
	{
		delete meta[i];
	}

	std::cout << "--------------------------" << std::endl;
	
	Cat *c = new Cat();
	Brain *b = new Brain("wow");
	
	std::cout << &c->getBrain() << " " << c->getBrain().getIdea(0) << std::endl;
	c->getBrain() = *b;
	std::cout << &c->getBrain() << " " << c->getBrain().getIdea(0) << std::endl;

	delete c;
	delete b;	
}
