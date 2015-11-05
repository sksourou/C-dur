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

#include <iostream>


class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );

		FragTrap &		operator=( FragTrap const & rhs );
		void					vaulthunter_dot_exe(std::string const & target);
		void 					rangedAttack(std::string const & target);
		void 					meleeAttack(std::string const & target);
		void 					takeDamage(unsigned int amount);
		void 					beRepaired(unsigned int amount);
		unsigned int 			getHitPoints( void ) const;
		unsigned int 			getMaxHitPoints( void ) const;
		unsigned int 			getEnergyPoints( void ) const;
		unsigned int 			getMaxEnergyPoints( void ) const;
		unsigned int 			getLevel( void ) const;
		unsigned int 			getMeleeAttackDamage( void ) const;
		unsigned int 			getRangedAttackDamage( void ) const;
		unsigned int 			getArmorDamageReduction( void ) const;
		std::string 			getName( void )  const;

	private:
		unsigned int 			_hitPoints;
		unsigned int 			_maxHitPoints;
		unsigned int 			_energyPoints;
		unsigned int 			_maxEnergyPoints;
		unsigned int 			_level;
		unsigned int 			_meleeAttackDamage;
		unsigned int 			_rangedAttackDamage;
		unsigned int 			_armorDamageReduction;
		std::string 			_name;
};
#endif
