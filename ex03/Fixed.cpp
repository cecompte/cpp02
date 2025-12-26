/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 09:16:55 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/26 12:23:46 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int const Fixed::_fraction = 8;

Fixed::Fixed(void) : _value(0) {}

Fixed::Fixed(const Fixed &other)
{
    this->_value = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
        this->_value = other.getRawBits();
    return (*this);
}

Fixed::~Fixed(void) {}

int Fixed::getRawBits( void ) const 
{
    return (this->_value);
}

void    Fixed::setRawBits(int const raw) 
{
    this->_value = raw;
}

Fixed::Fixed(int const n) : _value (n << _fraction) {}

Fixed::Fixed(float const f) : _value(roundf(f * (1 << _fraction))) {}

float   Fixed::toFloat( void ) const 
{
    return ((float)_value / (1 << _fraction));
}

int     Fixed::toInt( void ) const
{
    return (_value >> 8);
}

// Comparison operators

bool Fixed::operator<(const Fixed &other) const
{
    return (_value < other._value);
}

bool Fixed::operator>(const Fixed &other) const
{
    return (_value > other._value);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (_value <= other._value);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (_value >= other._value);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (_value == other._value);
}

bool Fixed::operator!=(const Fixed &other) const
{
    return (_value != other._value);
}

// Arithmetic operators

Fixed Fixed::operator+(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(_value + other._value);
    return (result);
}

Fixed Fixed::operator-(const Fixed &other) const
{
    Fixed result;
    result.setRawBits(_value - other._value);
    return (result);
}

Fixed Fixed::operator*(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((_value * other._value) >> _fraction);
    return (result);
}

Fixed Fixed::operator/(const Fixed &other) const
{
    Fixed result;
    result.setRawBits((_value << _fraction) / other._value);
    return (result);
}

// Increment & Decrement operators

Fixed& Fixed::operator++(void)
{
    ++_value;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    _value++;
    return (temp);
}

Fixed& Fixed::operator--(void)
{
    --_value;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    _value--;
    return (temp);
}

// Min and max

Fixed&  Fixed::min(Fixed &obj1, Fixed &obj2)
{
    return (obj1 <= obj2 ? obj1 : obj2);
}

Fixed&  Fixed::max(Fixed &obj1, Fixed &obj2)
{
    return (obj1 >= obj2 ? obj1 : obj2);
}

const Fixed& Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    return (obj1 <= obj2 ? obj1 : obj2);
}

const Fixed& Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    return (obj1 >= obj2 ? obj1 : obj2);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
