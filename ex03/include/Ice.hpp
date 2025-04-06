/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:48:48 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/06 15:23:08 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
		
	public:
		Ice(/* args */);
		~Ice();
		Ice(const Ice &other);
		Ice &operator = (const Ice &other);
		
		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif