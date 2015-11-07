// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: sksourou <sksourou@student.42.fr>          +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/11/05 19:27:56 by sksourou          #+#    #+#             //
//   Updated: 2015/11/05 19:27:57 by sksourou         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_CPP
# define NINJATRAP_CPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class NinjaTrap : virtual public ClapTrap {
	public:
		NinjaTrap( void );
		NinjaTrap( std::string name );
		~NinjaTrap( void );
		void 	ninjaShoebox(std::string const & target);
		NinjaTrap & operator=( NinjaTrap const &ft );

		void 	ninjaShoebox( ClapTrap & ct );
		void	ninjaShoebox( NinjaTrap & nt );
		void	ninjaShoebox( ScavTrap & st );
		void 	ninjaShoebox( FragTrap & ft );
};
#endif
