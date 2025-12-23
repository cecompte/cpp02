#ifndef Fixed_HPP
# define Fixed_HPP
# include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed& other);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
};

#endif

