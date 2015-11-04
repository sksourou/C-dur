// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 16:35:43 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 16:35:44 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string name, Weapon &w );
		~HumanA( void );

		void 	attack( void ) const;

	private:
		std::string	_name;
		Weapon 		&_w;

};

#endif
