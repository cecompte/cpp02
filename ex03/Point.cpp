/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:15:03 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/23 13:15:04 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// Default constructor
Point::Point(void)
{
    std::cout << "Default constructor called\n";
    return ;
}

// Copy constructor
Point::Point(const Point &other)
{
    std::cout << "Copy constructor called\n";
    (void) other;
    return ;
}

// Assignment operator overload
Point &Point::operator=(const Point &other)
{
    std::cout << "Assignment operator called\n";
    (void) other;
    return (*this);
}

// Destructor
Point::~Point(void)
{
    std::cout << "Destructor called\n";
    return ;
}

