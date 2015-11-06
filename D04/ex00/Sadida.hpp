// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sadida.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 16:16:28 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 16:16:30 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SADIDA_HPP
# define SADIDA_HPP

# include <iostream>
# include "Peon.hpp"

class Sadida : public Peon {

public:
	Sadida( std::string name );
	Sadida( Sadida const & rhs );
	~Sadida( void );

};

#endif
