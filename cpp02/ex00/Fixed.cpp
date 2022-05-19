#include "Fixed.hpp"

Fixed::Fixed():mword_length(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->mword_length = fixed.getRawBits();
}

Fixed &Fixed::operator=(Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->mword_length = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return(this->mword_length);
}

void Fixed::setRawBits(int const raw)
{
   this->mword_length = raw;
}
