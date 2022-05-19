#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(WrongDog &origin);
        WrongDog &operator=(WrongDog &origin);
        virtual ~WrongDog();

        void setType(std::string type);
        std::string getType() const;

        void makeSound() const;
};
