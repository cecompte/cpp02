/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 09:16:47 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/23 12:58:18 by cecompte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        Fixed(int const n);
        Fixed(float const f);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        int                 getRawBits(void) const;
        void                setRawBits(int const raw);
        float               toFloat(void) const;
        int                 toInt(void) const;
        bool                operator<(const Fixed &other) const;
        bool                operator>(const Fixed &other) const;
        bool                operator<=(const Fixed &other) const;
        bool                operator>=(const Fixed &other) const;
        bool                operator==(const Fixed &other) const;
        bool                operator!=(const Fixed &other) const;
        Fixed               operator+(const Fixed &other) const;
        Fixed               operator-(const Fixed &other) const;
        Fixed               operator*(const Fixed &other) const;
        Fixed               operator/(const Fixed &other) const;
        Fixed               &operator++(void);
        Fixed               operator++(int);
        Fixed               &operator--(void);
        Fixed               operator--(int);
        static Fixed        &min(Fixed &obj1, Fixed &obj2);
        static const Fixed  &min(const Fixed &obj1, const Fixed &obj2);
        static Fixed        &max(Fixed &obj1, Fixed &obj2);
        static const Fixed  &max(const Fixed &obj1, const Fixed &obj2);
    private:
        int                 _value;
        static int const    _fraction;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif

