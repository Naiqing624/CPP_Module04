/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:48:48 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 11:39:48 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
class AMateria;

class Ice : public AMateria
{
	private:
		
	public:
		Ice();
		~Ice();
		Ice(const Ice &other);
		Ice &operator = (const Ice &other);
		
		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif