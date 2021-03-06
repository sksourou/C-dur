/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:26:04 by sksourou          #+#    #+#             */
/*   Updated: 2015/11/05 16:20:13 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "FragTrap.hpp"

int main( void )
{
	int i;
	srand(time(0));

	FragTrap ft = FragTrap( );
	FragTrap ft2 = FragTrap("Cl4P-TP ");

	std::cout << "Let's Play ! with " << ft.getName( ) << std::endl;
	ft.takeDamage( 15 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	ft.takeDamage( 25 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;
	ft.beRepaired( 20 );
	std::cout << "HitPoints = " << ft.getHitPoints( ) << std::endl;

	i = 0;
	while ( i < 7 ) {
		ft.vaulthunter_dot_exe( "pourquoi" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Let's Play ! with " << ft2.getName( ) << std::endl;

	ft2.takeDamage( 55 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.takeDamage( 25 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.takeDamage( 45 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;
	ft2.beRepaired( 35 );
	std::cout << "HitPoints = " << ft2.getHitPoints( ) << std::endl;

	i = 0;
	while ( i < 5 ) {
		ft2.vaulthunter_dot_exe( "Golumns" );
		std::cout << std::endl;
		i++;
	}


	return 0;

}
