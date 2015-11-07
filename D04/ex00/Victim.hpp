// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:30:24 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:30:25 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

<<<<<<< HEAD
# include "Sorcerer.hpp"

class Victim {
public:
	Victim( std::string name );
	Victim( Victim const & rhs );
	~Victim( void );
=======
# include <iostream>

class Victim {

public:
	Victim( std::string const name );
	Victim( Victim const & rhs );
	~Victim( void );

>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
	std::string		getName( void ) const;
	void 			getPolymorphed( void ) const;
	Victim &		operator=( Victim const & src );
private:
	std::string _name;
<<<<<<< HEAD
=======

>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
};
std::ostream &	operator<<(std::ostream & o, Victim const & rhs);
#endif
