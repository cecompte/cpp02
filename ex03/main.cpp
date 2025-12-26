/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 09:16:42 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/26 12:34:29 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
	std::cout << "Case : Point P1(4, 4) and Triangle A(1, 1) B(-2, 3) C(3, 3)\n--\n";
	Point	A(1, 2);
	Point	B(-2, 3);
	Point	C(3, 3);
	Point	P1(4, 4);
	if (isInTriangle(A, B, C, P1))
		std::cout << "result : P1 is inside of triangle (wrong)\n";
	else
		std::cout << "result : P is outside of triangle (expected)\n";
	
	std::cout << "\nCase : Point P2(1, 2) and Triangle A(1, 1) B(-2, 3) C(3, 3)\n--\n";
	Point	P2(1, 2);
	if (isInTriangle(A, B, C, P2))
		std::cout << "result : P2 is inside of triangle (expected)\n";
	else
		std::cout << "result : P2 is outside of triangle (wrong)\n";
	return (0);
}