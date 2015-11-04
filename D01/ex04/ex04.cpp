// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:56:58 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:56:59 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main( void )
{
	std::string str= "HI THIS IS BRAIN";
	std::string *pointeur = &str;
	std::string &ref = str;

	std::cout << "str = " << str << std::endl;
	std::cout << "pointeur = " << *pointeur << std::endl;
	std::cout << "ref = " << ref << std::endl;

	return 0;
}
