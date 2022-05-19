#include "Zombie.hpp"

int main()
{
    Zombie *zombie1 = new Zombie("zombie1");
    Zombie *zombies = zombieHorde(3, "zombieHorde");

	zombie1->announce();
    for (int i = 0; i < 3; i++)
        zombies[i].announce();
    delete[] zombies;
    delete zombie1;
    return (0);
}
