// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:45:24 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:48:24 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie( std::string type, std::string name ): _type(type), _name(name) {
	return ;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " is killed by rick." << std::endl;
	return ;
}

void Zombie::annouce( void ) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::getType( void ) const
{
	return this->_type;
}

std::string Zombie::getName( void ) const
{
	return this->_name;
}
