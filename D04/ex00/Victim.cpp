// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:30:31 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:30:31 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

<<<<<<< HEAD
Victim::Victim( std::string name ) : _name(name) {
	std::cout << "Some random victim called"  << this->_name << "just popped !" << std::endl;
	return ;
}

=======
Victim::Victim( std::string const name ): _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}


>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
Victim::~Victim( void ) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

Victim::Victim( Victim const & rhs ) {
	*this = rhs;
<<<<<<< HEAD
}

std::string Victim::getName( void ) const {
	return this->_name;
}

void 	Victim::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;\
	return ;
}

=======
	return ;
}

std::string		Victim::getName( void ) const {
	return this->_name;
}

void			Victim::getPolymorphed( void ) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
	return ;
}

Victim &		Victim::operator=( Victim const & rhs ) {
	this->_name = rhs._name;
	return *this;
}
>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
<<<<<<< HEAD

Victim &		Victim::operator=( Victim const & rhs ) {
	this->_name = rhs._name;
	return *this;
}
=======
>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
