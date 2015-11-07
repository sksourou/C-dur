// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/05 18:18:43 by sksourou          #+#    #+#             //
//   Updated: 2015/11/05 18:18:45 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "ClapTrap.hpp"


ClapTrap::ClapTrap( void ) {
		std::cout << "ClapTrap -- start bootup sequence." << this->_name << "ready" << std::endl;
		return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
		std::cout << "ClapTrap -- start bootup sequence." << this->_name << "ready" << std::endl;
		return ;
}

ClapTrap::~ClapTrap( void ) {
		std::cout << "ClapTrap - Argh arghargh death gurgle gurglegurgle urgh... " << this->_name << "death." << std::endl;
	return ;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &ct)
{
	if ( this != &ct ) {
		this->_hitPoints = ct.getHitPoints( );
		this->_maxHitPoints = ct.getMaxHitPoints( );
		this->_energyPoints = ct.getEnergyPoints( );
		this->_maxEnergyPoints = ct.getMaxEnergyPoints( );
		this->_level = ct.getLevel( );
		this->_name = ct.getName( );
		this->_meleeAttackDamage = ct.getMeleeAttackDamage( );
		this->_rangedAttackDamage = ct.getRangedAttackDamage( );
		this->_armorDamageReduction = ct.getArmorDamageReduction( );
	}

    return *this;
}

void 			ClapTrap::meleeAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at Melee, causing " << this->_meleeAttackDamage << " points of damage !" << std::endl;
}

void			ClapTrap::rangedAttack(std::string const & target) {
	std::cout << "FR4G-TP " << this->_name << " attacks " << target;
	std::cout << " at range, causing " << this->_rangedAttackDamage << " points of damage !" << std::endl;
	return ;
}

void 			ClapTrap::takeDamage(unsigned int amount) {
	if (amount > this->_maxHitPoints)
		amount = this->_maxHitPoints;
	if ((int)(amount - this->_armorDamageReduction) < 0)
		amount = 0;
	else
		amount -= this->_armorDamageReduction;
	std::cout << "FR4G-TP " << this->_name << " taked " << amount << " damages " << std::endl;
	if ((int)(this->_hitPoints - amount) < 0)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void 	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << this->_name << " recovered " << amount << " hit points";
	if ((this->_hitPoints + amount) > this->_maxHitPoints)
		this->_hitPoints = 100;
	else
		this->_hitPoints += amount;
}
unsigned int	ClapTrap::getHitPoints( void ) const {
	return this->_hitPoints;
}

unsigned int ClapTrap::getMaxHitPoints( void ) const {
	return this->_maxHitPoints;
}

unsigned int ClapTrap::getEnergyPoints( void ) const {
	return this->_energyPoints;
}

unsigned int ClapTrap::getMaxEnergyPoints( void ) const {
	return this->_maxEnergyPoints;
}

unsigned int ClapTrap::getLevel( void ) const {
	return this->_level;
}

unsigned int ClapTrap::getMeleeAttackDamage( void ) const {
	return this->_meleeAttackDamage;
}

unsigned int ClapTrap::getArmorDamageReduction( void ) const {
	return this->_armorDamageReduction;
}

unsigned int ClapTrap::getRangedAttackDamage( void ) const {
	return	this->_rangedAttackDamage;
}

std::string ClapTrap::getName( void )  const {
	return this->_name;
}
