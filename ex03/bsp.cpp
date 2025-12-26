/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:15:37 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/26 12:31:22 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	abs(Fixed number)
{
	Fixed	temp(number);
	int		val;

	val = number.getRawBits();
	if (val < 0)
		temp.setRawBits(-val);
	return (temp);
}

Fixed	area(Point A, Point B, Point C)
{
	Fixed	x1(A.getX());
	Fixed	y1(A.getY());
	Fixed	x2(B.getX());
	Fixed	y2(B.getY());
	Fixed	x3(C.getX());
	Fixed	y3(C.getY());

	return (abs((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2)) / 2));
}

bool	isInTriangle(Point A, Point B, Point C, Point P)
{
	Fixed	ABC = area(A, B, C);
	Fixed	PAB = area(P, A, B);
	Fixed	PAC = area(P, A, C);
	Fixed	PBC = area(P, B, C);

	if (ABC == PAB + PAC + PBC)
		return (true);
	else
		return (false);
}