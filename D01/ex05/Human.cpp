// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 15:12:18 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 15:12:20 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
#include "Human.hpp"
#include "Brain.hpp"

Human::Human( void )
{
	this->_b = new Brain( );
	return ;
}

Human::~Human( void )
{
	return ;
}
std::string Human::identify( void ) const
{
	return ( this->_b->identify( ) );
}

const Brain &Human::getBrain( void ) const
{
	const Brain &b2 = *this->_b;
	return ( b2 );
}
