#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombies = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombies[i].set_name(name + std::to_string(i));
    return(zombies);
}
