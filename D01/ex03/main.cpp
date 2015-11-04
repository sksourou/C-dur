// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:49:07 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:49:08 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main( void )
{
	srand(time(0));

	ZombieHorde firstHode = ZombieHorde(12);

	return 0;
}
