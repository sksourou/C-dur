// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:17 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:18 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperMutant.hpp"

SuperMutant::SuperMutant( void ):Enemy(170, "Super Mutant") { 
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const & src) : Enemy(170, "Super Mutant") {
	*this = src;
	return ;
}

SuperMutant::~SuperMutant( void ) {
	std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int damage) {
	if (this->_hp - (damage - 3) >= 0)
		this->_hp -= (damage -3);
}

SuperMutant & SuperMutant::operator=(SuperMutant const &src){
	Enemy::operator=(src);
	return *this;
}