/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:48:34 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 10:36:46 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
		
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
		AMateria(const AMateria &other);
		AMateria &operator = (const AMateria &other);

		std::string const & getType() const;
		
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter & target);
};

#endif