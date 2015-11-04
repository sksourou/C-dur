// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 16:36:37 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 16:36:38 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>


class Weapon
{
	public:
		Weapon( std::string type );
		~Weapon( void );

		std::string getType( void ) const;
		void		setType( const std::string& type );

	private:
		std::string		_type;

};
#endif
