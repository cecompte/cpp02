/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:15:03 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/26 12:32:03 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {}

Point::Point(int const x, int const y) : _x(x), _y(y) {}

Point::Point(const Point &other)
{
    this->_x = other.getX();
    this->_y = other.getY();
    return ;
}

Point &Point::operator=(const Point &other)
{
    if (this != &other)
    {
        this->_x = other.getX();
        this->_y = other.getY();
    }
    return (*this);
}

Point::~Point(void) {}

int Point::getX(void) const
{
    return (_x);
}

int Point::getY(void) const
{
    return (_y);
}

