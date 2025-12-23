/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cecompte <cecompte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 09:16:47 by cecompte          #+#    #+#             */
/*   Updated: 2025/12/23 10:27:12 by cecompte         ###   ########.fr       */
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
        int                 getRawBits( void ) const;
        void                setRawBits( int const raw );
        float               toFloat( void ) const;
        int                 toInt( void ) const;
    private:
        int                 _value;
        static int const    _fraction;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif

