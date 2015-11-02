
#include <iostream>

class Pony {
	public:
		Pony(std::string name, std::string color, std::string horn);
		~Pony( void );

		std::string		getName( void ) const;
		std::string		getColor( void ) const;
		std::string		getHorn( void ) const;

		std::string		setName( std::string _name );
		std::string		setColor( std::string _color );
		std::string		setHorn( std::string _horn );

	private:
		std::string 	_name;
		std::string 	_color;
		std::string 	_horn;
};
