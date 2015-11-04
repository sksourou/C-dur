// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 16:35:54 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 16:35:56 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
	return ;
}
HumanB::~HumanB( void )
{
	return ;
}
void	HumanB::attack( void ) const
{
	std::cout << this->_name << " attacks with his " << this->_w->getType( ) << std::endl;

	return ;
}
void 	HumanB::setWeapon(Weapon w)
{
	Weapon *w2 = &w;
	this->_w = w2;
}
