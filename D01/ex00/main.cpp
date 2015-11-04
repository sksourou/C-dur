// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:46:59 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:47:40 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"
#include <iostream>

void ponyOnTheHeap( void )
{
	std::cout << "Heap Zone" << std::endl;
	Pony *Heapy = new Pony("Ahmed", "Blue", "10");
	std::cout << Heapy->getName( ) << " is " << Heapy->getColor() << " and his horn to be " << Heapy->getHorn() << " CM" << std::endl;
	std::cout << Heapy->getName( ) << " can use his horn for something move " << std::endl;

	delete Heapy;
	return ;
}

void ponyOnTheStack( void )
{
	std::cout << "Stack Zone" << std::endl;
	Pony Stacky = Pony("Mohammed", "Yellow", "20");
	std::cout << Stacky.getName( ) << " is " << Stacky.getColor() << " and his horn to be " << Stacky.getHorn() << std::endl;
	std::cout << Stacky.getName( ) << " is hlel so he just can eat " << std::endl;

	return ;
}

int main( void )
{
	std::cout << "		Welcome in my Little Poney" << std::endl;
	ponyOnTheHeap( );
	std::cout << std::endl;
	ponyOnTheStack( );

	return 0;
}
