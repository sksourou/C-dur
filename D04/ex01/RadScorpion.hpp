// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/07 09:19:36 by sksourou          #+#    #+#             //
//   Updated: 2015/11/07 09:19:37 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
	public:
		RadScorpion( );
		RadScorpion( RadScorpion const & src);
		~RadScorpion( void );
		void		takeDamage( int damage );
		RadScorpion & operator=(RadScorpion const& src);
};
#endif