// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:18:55 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:18:56 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.cpp"

class PowerFist : public AWeapon { 
public: 
	PowerFist( void );
	PowerFist(AWeapon const & src);
	~PowerFist( void);

	PowerFist & operator=(PowerFist const& src);

	void attack( void ) const;
};
#endif