// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 16:36:30 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 16:36:31 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string type ) : _type(type)
{
	return ;
}
Weapon::~Weapon( void )
{
	return ;
}
void		Weapon::setType( const std::string &type )
{
	this->_type = type;
}
std::string Weapon::getType( void ) const
{
	return ( this->_type );
}
