// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 15:12:09 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 15:12:11 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#include "Brain.hpp"
#include "Human.hpp"
int main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return 0;
}
