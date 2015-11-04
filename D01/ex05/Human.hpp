// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 15:12:24 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 15:12:25 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <iostream>
#include "Brain.hpp"

class Human
{
	public:
		Human( void );
		~Human( void );

		std::string identify( void ) const ;

		const Brain &getBrain( void ) const;

	private:
		const Brain 	*_b;

};

#endif
