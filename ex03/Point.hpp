/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:15:09 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/26 12:26:49 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"
# include <iostream>

class Point
{
    public:
        Point(void);
        Point(int const x, int const y);
        Point(const Point& other);
        Point &operator=(const Point &other);
        ~Point();
        int     getX(void) const;
        int     getY(void) const;
        
    private:
        int     _x;
        int     _y;
};

#endif

bool	isInTriangle(Point A, Point B, Point C, Point P);