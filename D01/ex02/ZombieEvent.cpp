// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:45:41 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:45:42 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>


ZombieEvent::ZombieEvent( void ) {
	this->_ZombieType = "stap";
	return ;
}

ZombieEvent::~ZombieEvent( void ) {
	return ;
}

Zombie *ZombieEvent::newZombie( std::string name ) {
	Zombie 	*z = new Zombie(this->_ZombieType, name);
	return z;
}

void 	ZombieEvent::setZombieType( std::string _type) {
	this->_ZombieType = _type;
}
