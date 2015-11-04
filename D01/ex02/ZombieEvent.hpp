// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:45:47 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:46:08 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"

 class ZombieEvent {
	public:
 		ZombieEvent( void );
 		~ZombieEvent( void );

 		Zombie *newZombie( std::string name );

 		void setZombieType( std::string _type);
 	private:
 		std::string _ZombieType;
 };
#endif
