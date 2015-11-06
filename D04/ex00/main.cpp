// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:31:03 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:31:05 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main( void ) {
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Sadida Adidas("Adidas");

	std::cout << robert << jim << joe << Adidas;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(Adidas);
	return 0;
}
