// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/05 19:27:42 by sksourou          #+#    #+#             //
//   Updated: 2015/11/05 19:27:43 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( void ) {
	this->_name = "NinjaTrap";
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;

	std::cout << "Konoha have a new Sennin" << std::endl;
	return ;
}

NinjaTrap::NinjaTrap( std::string name ) : ClapTrap(name) {
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_level = 1;
	this->_meleeAttackDamage = 60;
	this->_rangedAttackDamage = 5;
	this->_armorDamageReduction = 0;
	return ;
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << this->_name << "die like Jiraya" << std::endl;
	return ;
}


void 	NinjaTrap::ninjaShoebox( ClapTrap & ct ) {
	std::cout << "My Mangeykyo can eat you" << std::endl;
}

void 	NinjaTrap::ninjaShoebox( NinjaTrap & nt ) {
	std::cout << "I need to kill my best friend" << std::endl;
}

void 	NinjaTrap::ninjaShoebox( ScavTrap & st ) {
	std::cout << "I can see all of you're move" << std::endl;
}

void 	NinjaTrap::ninjaShoebox( FragTrap & ft ) {
	std::cout << "KING" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &ft)
{
	ClapTrap::operator=( ft );

    return *this;
}
