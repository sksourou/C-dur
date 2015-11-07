// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:18:23 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:18:24 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon {
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon( void );

	std::string const &	getName( void ) const;
	int 				getAPCost( void ) const;
	int 				getDamage( void ) const;
	virtual void 		attack( void ) const = 0;

	AWeapon &			operator=( AWeapon const & src );

private:
	std::string _name;
	int			_damage;
	int			_apCost;
};
#endif