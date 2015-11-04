// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 18:26:00 by sksourou          #+#    #+#             //
//   Updated: 2015/11/04 18:26:01 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

class FragTrap {
	public:

		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap();

		int getHitPoints( void ) const;
		int getMaxHitPoints( void ) const;
		int getEnergyPoints( void ) const;
		int getMaxEnergyPoints( void ) const;
		int getLevel( void ) const;
		int getMeleeAttackDamage( void ) const;
		int getRangedAttackDamage( void ) const;
		int getArmorDamageReduction( void ) const;
		std::string getName( void )  const;
	private:
		int _hitPoints;
		int _maxHitPoints;
		int _energyPoints;
		int _maxEnergyPoints;
		int _level;
		int _meleeAttackDamage;
		int _rangedAttackDamage;
		int _armorDamageReduction;
		std::string name;
};
