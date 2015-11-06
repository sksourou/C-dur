// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 12:30:49 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 12:30:50 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
	public:
		Peon( std::string name);
		Peon( Peon const & rhs );
		~Peon( void );
};
#endif
