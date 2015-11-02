// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex01.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/02 18:36:02 by sksourou          #+#    #+#             //
//   Updated: 2015/11/02 18:55:38 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

void	memoryLeak()
{
	std::string*        panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}
int		main( void )
{
	memoryLeak();
	return 0;
}
