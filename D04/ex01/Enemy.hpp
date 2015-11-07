// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:04 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:05 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <iostream>

class Enemy {
protected:
	int 		_hp;
	std::string _type;
public:
	Enemy(int hp, std::string const & type);
	Enemy( Enemy const & src);
	virtual ~Enemy( );

	std::string const & getType( ) const;
	int getHP( ) const;
	virtual void takeDamage(int);
	Enemy & operator=( Enemy const & src );
};
#endif