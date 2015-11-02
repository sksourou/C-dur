#include <iostream>
#include "Pony.hpp"

/**
	CONSTRUCTOR
**/
Pony::Pony( std::string name, std::string color, std::string horn ) : _name(name), _color(color), _horn(horn)
{
	std::cout << "Welcome to" << this->_name << "good luck ! :)" << std::endl;
	return ;
}

/**
	DESTRUCTOR
**/
Pony::~Pony( void )
{
	std::cout << "Good by to" << this->_name << "unlucky bro" << std::endl;
	return ;
}


/**
	GETTER
**/
std::string		Pony::getName( void ) const
{
	return this->_name;
}
std::string		Pony::getColor( void ) const
{
	return this->_color;
}
std::string		Pony::getHorn( void ) const
{
	return this->_horn;
}


/**
	SETTER
**/
std::string			Pony::setName( std::string _name )
{
	this->_name = _name;
	return this->_name;
}
std::string			Pony::setColor( std::string _color )
{
	this->_color = _color;
	return this->_color;
}
std::string			Pony::setHorn( std::string _horn )
{
	this->_horn = _horn;
	return this->_horn;
}
