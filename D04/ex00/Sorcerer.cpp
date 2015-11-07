// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:30:17 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:30:18 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"
<<<<<<< HEAD

Sorcerer::Sorcerer( std ::string name , std::string title ):_name(name), _title(title) {
	std::cout << this->_name << this->_title << "is born !" << std::endl;

	return ;
}

Sorcerer::~Sorcerer( void ) {
	std::cout << this->_name << this->_title << "is dead ! Consequences will never be the same" << std::endl;
}

void			Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
	return ;
}

std::string 	Sorcerer::getName( void ) const {
	return this->_name;
}

std::string 	Sorcerer::getTitle( void ) const {
	return this->_title;
}

std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs ) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
=======
Sorcerer::Sorcerer( std::string const name, std::string const title ) : _name(name), _title(title)
{
	std::cout << name << ", " << title << ", is born !" << std::endl;
	return ;
}

Sorcerer::Sorcerer( Sorcerer const & rhs ) {
	*this = rhs;
	return ;

}

Sorcerer::~Sorcerer( void ) {
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same !" << std::endl;
	return ;
}

std::string		Sorcerer::getName( void ) const {
	return this->_name;
}

std::string		Sorcerer::getTitle( void ) const {
	return this->_title;
}

void			Sorcerer::polymorph(Victim const & src) const {
	src.getPolymorphed();
	return ;
}


>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
Sorcerer &		Sorcerer::operator=( Sorcerer const & rhs) {
	this->_name = rhs._name;
	this->_title = rhs._title;
	return *this;
}
<<<<<<< HEAD
=======

std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs ) {
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
	return o;
}
>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
