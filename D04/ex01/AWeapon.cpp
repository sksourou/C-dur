// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:18:19 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:18:20 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage): 
	_name(name), _apCost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon( AWeapon const & src ) {
	*this = src;
	return ;
}

AWeapon::~AWeapon( void ) {
	return ;
}

std::string	const	& AWeapon::getName( void ) const {
	return this->_name;
}

int				AWeapon::getAPCost( void ) const {
	return this->_apCost;
}

int				AWeapon::getDamage( void ) const {
	return this->_damage;
}

AWeapon &		AWeapon::operator=( AWeapon const & src ) {
	this->_name = src._name;
	this->_damage = src._damage;
	this->_apCost = src._apCost;
	return *this;
}