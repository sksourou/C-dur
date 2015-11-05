/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:26:04 by sksourou          #+#    #+#             */
/*   Updated: 2015/11/05 20:46:07 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	FragTrap ft = FragTrap( );
	FragTrap ft2 = FragTrap("Kakashi-Sensei");
	FragTrap ft3 = FragTrap(ft2);

	std::cout << std::endl;

	std::cout << "Started with " << ft2.getName( ) << std::endl;
	i = 0;
	while ( i < 5 ) {
		ft2.vaulthunter_dot_exe( "Vickings" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap st = ScavTrap( );
	ScavTrap st2 = ScavTrap("CL4P-TP");
	ScavTrap st3 = ScavTrap(st2);

	std::cout << std::endl;

	std::cout << "Started with " << st2.getName( ) << std::endl;
	i = 0;
	while ( i < 3 ) {
		st2.challengeNewcomer("pourquoi stp");
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	ClapTrap ct = ClapTrap("SIMPLE");

	NinjaTrap nt = NinjaTrap("Naruto-san");
	NinjaTrap nt2 = NinjaTrap("Sasuke-san");

	std::cout << std::endl;

	std::cout << "start with the ninja : " << st.getName( ) << std::endl;

	nt.ninjaShoebox( ct );
	nt.ninjaShoebox( nt2 );
	nt.ninjaShoebox( ft2 );
	nt.ninjaShoebox( st2 );

	std::cout << std::endl;
	std::cout << std::endl;

	return 0;
}
