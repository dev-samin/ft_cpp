#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = new Zombie("zombie1");
	Zombie *zombie2 =  newZombie("zombie2");
    randomChump("random_zombie1");
    randomChump("random_zombie2");
    delete zombie1;
	delete zombie2;	
}
