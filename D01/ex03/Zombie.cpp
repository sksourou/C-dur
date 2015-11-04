// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:48:34 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:48:36 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::~Zombie( void )
{
	std::cout << this->_name << " is killed by rick " << std::endl;
	return ;
}

void	Zombie::announce( void )
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;

	return ;
}

std::string		Zombie::getType( void ) const
{
	return this->_type;
}
std::string		Zombie::getName( void ) const
{
	return this->_name;
}

void		Zombie::setType( std::string type )
{
	this->_type = type;
}
void		Zombie::setName( std::string name )
{
	this->_name = name;
}
