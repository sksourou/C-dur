// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:29:38 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:29:39 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.cpp"

class PlasmaRifle : public AWeapon { 
public: 
	PlasmaRifle( void );
	PlasmaRifle(PlasmaRifle const & src);
	~PlasmaRifle( void );

	PlasmaRifle & operator=(PlasmaRifle const& src);
	void attack(void) const;
};
#endif