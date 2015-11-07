// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:46 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:48 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character {

public:
	Character(std::string const & name);
	Character(Character const & src);
	~Character();

	void 				recoverAP();
	void 				equip(AWeapon*);
	void 				attack(Enemy*);

	std::string const 	&getName() const;
	int					getAp() const;
	AWeapon 			*getWeapon() const;
	Character &		operator=(Character const & src);

private:
	std::string		_name;
	int				_ap;
	AWeapon			*_weapon;
};

std::ostream &	operator<<(std::ostream & o, Character const & src);

#endif
