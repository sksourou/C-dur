// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 10:43:48 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 10:43:49 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string name ) : ClapTrap(name), FragTrap(name), NinjaTrap(name) {
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;
	std::cout << "SuperTrap -- start bootup sequence." << std::endl;
	return ;
}

SuperTrap::SuperTrap( SuperTrap const & src ):
	FragTrap(src),
	NinjaTrap(src)
{
	*this = src;
	return ;
}

SuperTrap::~SuperTrap( void ) {
	std::cout << "SuperTrap -- Died." << std::endl;
	return ;
}
