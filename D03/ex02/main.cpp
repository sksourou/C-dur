/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:26:04 by sksourou          #+#    #+#             */
/*   Updated: 2015/11/05 19:12:45 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	FragTrap ft = FragTrap( );
	FragTrap ft2 = FragTrap("BOB");
	FragTrap ft3 = FragTrap(ft2);

	std::cout << std::endl;
	std::cout << "Started " << ft2.getName( ) << std::endl;
	i = 0;
	while ( i < 7 ) {
		ft2.vaulthunter_dot_exe( "Patrick" );
		std::cout << std::endl;
		i++;
	}

	ScavTrap st = ScavTrap( );

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Started with" << st.getName( ) << std::endl;
	i = 0;
	while ( i < 5 ) {
		st.challengeNewcomer("Carlos");
		std::cout << std::endl;
		i++;
	}


	return 0;
}
