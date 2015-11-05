// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/05 16:28:55 by sksourou          #+#    #+#             //
//   Updated: 2015/11/05 16:28:56 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:

		ScavTrap( void );
		ScavTrap( std::string name );
		~ScavTrap( void );

		ScavTrap &				operator=( ScavTrap const & rhs );
		void					challengeNewcomer( std::string const & target );
};
#endif
