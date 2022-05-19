#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie();
        Zombie *newZombie(std::string name);
        std::string get_name();
        void set_name(std::string name);
        void announce(void);
        void randomChump(std::string name);
};

Zombie* zombieHorde(int N, std::string name);