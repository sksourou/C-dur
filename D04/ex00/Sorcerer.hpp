// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:30:10 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:30:13 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
<<<<<<< HEAD

class Sorcerer {

public:
	Sorcerer( std::string name, std::string title);
=======
# include "Sadida.hpp"

class Sorcerer {
public:
	Sorcerer( std::string name, std::string title);
	Sorcerer( Sorcerer const & rhs );
>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
	~Sorcerer( void );

	std::string		getName( void ) const;
	std::string 	getTitle(  void ) const;
<<<<<<< HEAD
	Sorcerer &		operator=(Sorcerer const & src);
	void			polymorph(Victim const & src) const;
=======
	void			polymorph(Victim const & src) const;
	Sorcerer &		operator=(Sorcerer const & src);
>>>>>>> c9fe356469f5a1820c6daa2d73c79447030f07dc
private:
	std::string _name;
	std::string _title;
};
	std::ostream &	operator<<( std::ostream & o, Sorcerer const & rhs );
#endif
