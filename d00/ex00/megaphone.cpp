// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megahone.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/10/31 16:53:08 by sksourou          #+#    #+#             //
//   Updated: 2015/10/31 17:02:20 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main(int ac, char **av)
{
	int i = 1;
	int j;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i != ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 97 && av[i][j] <= 122)
				av[i][j] -= 32;
			j++;
		}
		std::cout << av[i];
		i++;
	}
	std::cout << std::endl;
	return (0);
}
