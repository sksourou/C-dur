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

Victim::Victim( std::string const name ): _name(name) {
	std::cout << "Some random victim called " << this->_name << " just popped !" << std::endl;
	return ;
}


Victim::~Victim( void ) {
	std::cout << "Victim " << this->_name << " just died for no apparent reason !" << std::endl;
	return ;
}

Victim::Victim( Victim const & rhs ) {
	*this = rhs;
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

std::ostream & operator<<(std::ostream & o, Victim const & rhs) {
	o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
