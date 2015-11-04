// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:49:02 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:49:04 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde( int i );
		~ZombieHorde( void );

		std::string	randomChump( void );
		void announce();

	private:
		Zombie			*_z;
		int 			_numberZombie;

};

#endif
