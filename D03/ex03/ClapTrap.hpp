// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/05 18:18:53 by sksourou          #+#    #+#             //
//   Updated: 2015/11/05 18:19:02 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
class ClapTrap {

		public:
			ClapTrap( void );
			ClapTrap( std::string name );
			~ClapTrap( void );
			ClapTrap &				operator=(ClapTrap const &ct);
			unsigned int 			getHitPoints( void ) const;
			unsigned int 			getMaxHitPoints( void ) const;
			unsigned int 			getEnergyPoints( void ) const;
			unsigned int 			getMaxEnergyPoints( void ) const;
			unsigned int 			getLevel( void ) const;
			unsigned int 			getMeleeAttackDamage( void ) const;
			unsigned int 			getRangedAttackDamage( void ) const;
			unsigned int 			getArmorDamageReduction( void ) const;
			std::string 			getName( void )  const;

		protected:
			void 					rangedAttack(std::string const & target);
			void 					meleeAttack(std::string const & target);
			void 					takeDamage(unsigned int amount);
			void 					beRepaired(unsigned int amount);
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
