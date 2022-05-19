#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        ~Zombie();
        std::string get_name();
        void set_name(std::string name);
        void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);