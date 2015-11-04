// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 15:12:29 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 15:12:30 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <sstream>
#include "Brain.hpp"

Brain::Brain( void ){
	return ;
}

Brain::~Brain( void ){
	return ;
}

std::string Brain::identify( void ) const
{
	std::ostringstream oss;
	oss << ( void* )this;
	std::string adressBrain(oss.str( ) );

	return(adressBrain);
}
