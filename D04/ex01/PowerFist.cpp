// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:18:51 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:18:52 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PowerFist.hpp"

PowerFist::PowerFist( void ): AWeapon("Power Fist", 8, 50) {return ;}

PowerFist::PowerFist(AWeapon const & src) : AWeapon("PowerFist", 50 ,8) {
	*this = src;
	return ;
}

PowerFist::~PowerFist( void ) {
	return ;
}

void PowerFist::attack( void ) const {
 	std::cout << "* pschhh... SBAM! *" << std::endl;
 	return ;
}

PowerFist & PowerFist::operator=(PowerFist const& src) {
	AWeapon::operator=(src);
	return *this;
}