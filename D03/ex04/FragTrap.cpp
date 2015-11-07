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

const char		*arrayAttacks[] = {
	"Kill, reload! Kill, reload! KILL! RELOAD!",
	"Uh, how do I cast magic missile?",
	"All these bullets in just one shot.",
	"Laaasers!",
	"100\% more mini-trap turret!",
	NULL
};


void	FragTrap::vaulthunter_dot_exe(std::string const & target) {
	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout << "Vaulthunter.exe attack " << target << ". \"" << arrayAttacks[rand() % 5] << "\"";
	}
	else
		std::cout << "Low Energy !";
}

FragTrap::FragTrap( void ) {
	this->_name = "Pussy cats dolls ";
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout <<"Fragtrap -- start bootup sequence."<< std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_level = 1;
	this->_meleeAttackDamage = 30;
	this->_rangedAttackDamage = 20;
	this->_armorDamageReduction = 5;

	std::cout << "Fragtrap -- start bootup sequence." << this->_name << "ready" << std::endl;

	return ;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap - Argh arghargh death gurgle gurglegurgle urgh... " << this->_name << "death." << std::endl;
	return ;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs) {
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




