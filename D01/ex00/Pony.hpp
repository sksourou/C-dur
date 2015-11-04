// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:46:53 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:46:55 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>

class Pony {
	public:
		Pony(std::string name, std::string color, std::string horn);
		~Pony( void );

		std::string		getName( void ) const;
		std::string		getColor( void ) const;
		std::string		getHorn( void ) const;

		std::string		setName( std::string _name );
		std::string		setColor( std::string _color );
		std::string		setHorn( std::string _horn );

	private:
		std::string 	_name;
		std::string 	_color;
		std::string 	_horn;
};
#endif
