// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sadida.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 16:16:21 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 16:16:22 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sadida.hpp"

Sadida::Sadida( std::string name ): Peon(name) {
	std::cout << "Balabang." << std::endl;
	return;
}

Sadida::~Sadida( void ) {
	std::cout << "Sadida died bruh." << std::endl;
	return;
}
