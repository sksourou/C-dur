// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:25:53 by sksourou          #+#    #+#             //
//   Updated: 2015/11/04 18:25:55 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int	FragTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

int getMaxHitPoints( void ) const {
	return this->_maxHitPoints;
}

int getEnergyPoints( void ) const {
	return this->_energyPoints;
}

int getMaxEnergyPoints( void ) const {
	return this->_maxEnergyPoints;
}

int getLevel( void ) const {
	return this->_getLevel;
}

int 	getMeleeAttackDamage( void ) const {
	return this->_meleeAttackDamage;
}

int getArmorDamageReduction( void ) const {
	return this->_armorDamageReduction;
}

int 	getRangedAttackDamage( void ) const {
	return	this->_rangedAttackDamage;
}

std::string getName( void )  const {
	return this->_name;
}

FragTrap::FragTrap( void ) {
	this->_name = "Claptrap";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "Claptrap -- start bootup sequence." << std::endl;
}

FragTrap::FragTrap( std::string name ) : _name(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "Claptrap -- start bootup sequence." << std::endl;

	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death." << std::endl;
	return ;
}




