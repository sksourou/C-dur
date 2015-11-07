// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:42 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:43 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"

Character::Character(Character const & src) { 
	*this = src; 
	return ;
}
Character::Character(std::string const & name):
	_name(name), _ap(40)
{
	return;
}

void				Character::attack( Enemy *enemy ) {
	if (!enemy || !this->_weapon || this->_ap - this->_weapon->getAPCost() < 0)
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a ";
	std::cout << this->_weapon->getName() << std::endl;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	this->_ap -= this->_weapon->getAPCost();
	if (enemy->getHP() <= 0)
		delete enemy;
}

void				Character::recoverAP( void ) {
	if (this->_ap + 10 <= 40)
		this->_ap += 10;
	else
		this->_ap = 40;
}

void				Character::equip( AWeapon *weapon ) {
	this->_weapon = weapon;
}

Character &			Character::operator=(Character const & src) {
	this->_name = src._name;
	this->_ap = src._ap;
	this->_weapon = src._weapon;
	return *this;
}

std::string const	&Character::getName( void ) const {
	return this->_name;
}

int					Character::getAp( void ) const {
	return this->_ap;
}

AWeapon				*Character::getWeapon( void ) const {
	return this->_weapon;
}



std::ostream & operator<<(std::ostream & o, Character const & src) {
	AWeapon *weapon;

	weapon = src.getWeapon();
	if (weapon) {
		o << src.getName() << " has " << src.getAp() << " AP and wields a " << weapon->getName() << std::endl;
	} else {
		o << src.getName() << " has " << src.getAp() << " AP and is unarmed" << std::endl;
	}
	return o;
}