// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/05 16:28:44 by sksourou          #+#    #+#             //
//   Updated: 2015/11/05 16:28:45 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "ScavTrap.hpp"

const char		*arrayAttack[] = {
	"Step right up, to the Bulletnator 9000!",
	"This is why I was built!",
	"Like running over a bug!",
	"Who's a badass robot? This guy!",
	"Ha ha, this is in no way surprising! Ha ha!",
	NULL
};

void		ScavTrap::challengeNewcomer( std::string const & target ) {
		std::cout << "SC4V-TR4P attack " << target << ". \"" << arrayAttack[rand() % 5] << "\"" << std::endl;
}

ScavTrap::ScavTrap( void ) {
	this->_name = "Pussy cats dolls ";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_level = 1;
	this->_meleeAttackDamage = 20;
	this->_rangedAttackDamage = 15;
	this->_armorDamageReduction = 3;

	std::cout <<"Scavtrap -- start bootup sequence."<< std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "Scavtrap -- start bootup sequence." << this->_name << "ready" << std::endl;

	return ;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "Argh arghargh death gurgle gurglegurgle urgh... " << this->_name << "death." << std::endl;
	return ;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_maxHitPoints = rhs._maxHitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_maxEnergyPoints = rhs._maxEnergyPoints;
	this->_level = rhs._level;
	this->_meleeAttackDamage = rhs._meleeAttackDamage;
	this->_rangedAttackDamage = rhs._rangedAttackDamage;
	this->_armorDamageReduction = rhs._armorDamageReduction;
	return *this;
}
