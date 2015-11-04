// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.class.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/04 11:25:12 by sksourou          #+#    #+#             //
//   Updated: 2015/11/04 11:25:13 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //


#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

class Fixed {
	public:
		Fixed(int const n);
		~Fixed( void );

		int getValue( void ) const;

		Fixed & operator=(Fixed const & rhs );

	private:
		int _n;
};
