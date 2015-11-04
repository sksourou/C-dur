// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:48:54 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:48:55 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde( int i ) : _numberZombie(i)
{
	this->_z = new Zombie[this->_numberZombie];

	this->announce( );

	return ;
}

ZombieHorde::~ZombieHorde( void )
{
	return ;
}

std::string	ZombieHorde::randomChump( void )
{
	int			random;
	std::string listZombieName[5];

	listZombieName[0] = "Eren";
	listZombieName[1] = "Para";
	listZombieName[2] = "Shinchi";
	listZombieName[3] = "Steven";
	listZombieName[4] = "Golum";

	random = rand() % 5;

	return (listZombieName[random]);
}

void	ZombieHorde::announce( void )
{
	int		j;

	j = 0;
	while ( j < this->_numberZombie ) {

		this->_z[j].setType( "Runners" );
		this->_z[j].setName( this->randomChump( ) );
		this->_z[j].announce( );
		j++;
	}

	return ;
}
