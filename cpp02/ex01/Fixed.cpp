#include <iostream>
#include "Fixed.hpp"
#include <cmath>

//생성자
Fixed::Fixed()
{	    
	this->mword_length = 0;
    std::cout << "Default constructor called " <<  mword_length << std::endl;
}

Fixed::Fixed(const int int_num)
{
    this->mword_length = int_num << mfractional_length;
    std::cout << "Int constructor called  " << mword_length << std::endl;
}

Fixed::Fixed(const float float_num)
{
    this->mword_length = roundf(float_num * (1 << mfractional_length));

    std::cout << "float constructor called  " << mword_length << std::endl;
}

// 복사 생성자
Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    this->mword_length = fixed.getRawBits();
}

// 소멸자
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// 연산자 오버로딩
Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    this->mword_length = fixed.getRawBits();
    return (*this);
}

//입출력 연산자 오버로딩
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

int Fixed::toInt(void) const
{
    return (mword_length >> mfractional_length);
}

float Fixed::toFloat(void) const
{
    return (float(mword_length) / (1 << mfractional_length));
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->mword_length);
}

void Fixed::setRawBits(int const raw)
{
    this->mword_length = raw;
}
