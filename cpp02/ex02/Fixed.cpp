#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->mword_length = 0;
}


Fixed::Fixed(const int int_num)
{
    this->mword_length = int_num << mfractional_length;
}

Fixed::Fixed(const float float_num)
{
    this->mword_length = roundf(float_num * (1 << mfractional_length));
}


Fixed::Fixed(const Fixed &fixed)
{
    this->mword_length = fixed.getRawBits();
}

// 대입 연산자 오버로딩
Fixed &Fixed::operator=(const Fixed &fixed)
{
    this->mword_length = fixed.getRawBits();
    return (*this);
}

// 소멸자
Fixed::~Fixed() {}

//입출력 연산자 오버로딩
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

int Fixed::getRawBits(void) const
{
    return (this->mword_length);
}

void Fixed::setRawBits(int const raw)
{
    this->mword_length = raw;
}

// 비교 연산자 오버로딩
bool Fixed::operator>(const Fixed &fixed) const
{
    return (getRawBits() > fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return ((getRawBits() >= fixed.getRawBits()));
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return ((getRawBits() < fixed.getRawBits()));
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return ((getRawBits() <= fixed.getRawBits()));
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return ((getRawBits() == fixed.getRawBits()));
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return ((getRawBits() != fixed.getRawBits()));
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    Fixed temp(*this);

    temp.setRawBits(this->getRawBits() + fixed.getRawBits());
    return (temp);
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    Fixed temp(*this);

    temp.setRawBits(this->getRawBits() - fixed.getRawBits());
    return (temp);
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    Fixed temp(*this);
	
    temp.setRawBits(this->getRawBits() * fixed.getRawBits() >> 8);
    return (temp);
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    Fixed temp(*this);

    temp.setRawBits(this->getRawBits() / fixed.getRawBits() << 8);
    return (temp);
}

//전위증가
Fixed &Fixed::operator++()
{
    this->mword_length++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->mword_length--;
    return (*this);
}

//후위증가
Fixed Fixed::operator++(int)
{
    Fixed temp(*this);

    this->mword_length++;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);


    this->mword_length--;
    return (temp);
}

int Fixed::toInt(void) const
{
    return (mword_length >> mfractional_length);
}

float Fixed::toFloat(void) const
{
    return ((float)mword_length / (1 << mfractional_length));
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}
