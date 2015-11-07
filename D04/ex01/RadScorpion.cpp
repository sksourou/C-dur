// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:30 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:31 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RadScorpion.hpp"

RadScorpion::RadScorpion( ) : Enemy(80,"Rad Scorpion") {
	std::cout << "* click click click *" << std::endl;
	return ;
}
RadScorpion::RadScorpion( RadScorpion const & src) : Enemy(170, "RadScorpion"){
	*this = src;	
	return ;
}

RadScorpion::~RadScorpion( void ) { std::cout << "* SPROTCH *" << std::endl;}

RadScorpion & RadScorpion::operator=(RadScorpion const& src)
{
	Enemy::operator=(src);
	return *this;
}

void				RadScorpion::takeDamage( int dmg ) {
	if (this->_hp - dmg >= 0)
		this->_hp -= dmg; 
}