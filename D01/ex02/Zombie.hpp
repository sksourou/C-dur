// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:45:33 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:45:34 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie( std::string type, std::string name );
		~Zombie( void );

		void		annouce( void );
		std::string getType( void ) const;
		std::string getName( void ) const;

	private:
		std::string _type;
		std::string _name;

};
#endif
