// ************************************************************************** //
//                                                        :::      ::::::::   //
//                                                                            //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 14:48:42 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 14:48:43 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
public:
	Zombie( void );
	~Zombie( void );

	void announce( void );

	std::string		getType( void ) const;
	std::string		getName( void ) const;
	void			setType( std::string type );
	void			setName( std::string name );
private:
	std::string 	_type;
	std::string 	_name;
};
#endif
