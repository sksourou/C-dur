// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:30:56 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:30:58 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Peon.hpp"

Peon::Peon( std::string name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
	return ;
}

Peon::~Peon( void ) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}
