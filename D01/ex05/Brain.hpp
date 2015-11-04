// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/03 15:12:34 by sksourou          #+#    #+#             //
//   Updated: 2015/11/03 15:12:35 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //
#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain( void );
	~Brain( void );

	std::string identify( void ) const;
};
#endif
