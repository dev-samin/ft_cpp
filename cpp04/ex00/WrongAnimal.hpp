#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal &origin);
        WrongAnimal &operator=(WrongAnimal &origin);
        virtual ~WrongAnimal();

        void setType(std::string type);
        virtual std::string getType() const;

        void makeSound() const;
};

#endif
