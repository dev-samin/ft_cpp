#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat &origin);
        WrongCat &operator=(WrongCat &origin);
        virtual ~WrongCat();

        void setType(std::string type);
        std::string getType() const;

        void makeSound() const;
};
