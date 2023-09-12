#include "Fixed.Class.hpp"

class Point
{
	public:

		Point( void );
		Point( const float X, const float Y );
		Point( Point const &src );
		~Point( void );

		Point	&operator=( Point const &src );

        const   Fixed getx( void ) const;
		void setx( int const setter );

        const   Fixed gety( void ) const;
		void sety( int const setter );



	private:

        const Fixed   _x;
        const Fixed   _y;

};