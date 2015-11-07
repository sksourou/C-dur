// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:21 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:22 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
	SuperMutant( void );
	SuperMutant(SuperMutant const & src);
	~SuperMutant( void );

	SuperMutant & operator=(SuperMutant const& src);
	void takeDamage(int); 
};
#endif