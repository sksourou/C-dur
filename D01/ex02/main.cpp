// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:46:16 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:46:17 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void randomChump( void )
{
	int 	_rand;
	std::string ZombieName[5];
	ZombieEvent firstEvent = ZombieEvent( );

	ZombieName[0] = "Shen";
	ZombieName[1] = "Glenn";
	ZombieName[2] = "Bethy";
	ZombieName[3] = "Tyrese";
	ZombieName[4] = "Gouvernor";

	_rand = rand() % 5;

	firstEvent.setZombieType( "Runing" );
	Zombie *z = firstEvent.newZombie(ZombieName[_rand]);
	z->annouce( );

	delete z;
	return ;
}

int main( void )
{
	int i = 0;

	srand(time(NULL));
	while (i < 10) {
		randomChump( );
		i++;
		}
	return 0;
}
