// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:18:36 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:18:37 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( void ) : AWeapon("PlasmaRifle", 21 ,5){return ;}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) : AWeapon("PlasmaRifle", 21 ,5) {
	*this = src;
	return ;
}

PlasmaRifle::~PlasmaRifle( void ) {
	return ;
}

void PlasmaRifle::attack( void ) const {
 std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const& src){
	AWeapon::operator=(src);
	return *this;
}