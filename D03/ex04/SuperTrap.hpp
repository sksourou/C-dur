// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/06 10:43:58 by sksourou          #+#    #+#             //
//   Updated: 2015/11/06 10:43:59 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap( std::string name );
	SuperTrap( SuperTrap const & src );
	~SuperTrap( void );

};
#endif
