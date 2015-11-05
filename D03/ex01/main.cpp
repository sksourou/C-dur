/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/04 18:26:04 by sksourou          #+#    #+#             */
/*   Updated: 2015/11/05 18:09:54 by sksourou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main( void )
{
	int i;
	srand(time(0));

	ScavTrap st = ScavTrap("Full-Scav");
	FragTrap ft = FragTrap("Cl4P-TP");

	std::cout << std::endl;
	std::cout << "Started with  " << ft.getName( ) << std::endl;
	i = 0;
	while ( i < 7 ) {
		ft.vaulthunter_dot_exe( "Bob" );
		std::cout << std::endl;
		i++;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Started with" << st.getName( ) << std::endl;
	i = 0;
	while ( i < 5 ) {
		st.challengeNewcomer( "Patrick" );
		std::cout << std::endl;
		i++;
	}

	return 0;
}
