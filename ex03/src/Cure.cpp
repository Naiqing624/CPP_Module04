/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:49:41 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 10:41:25 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	
}

Cure &Cure::operator = (const Cure &other)
{
	AMateria::operator= (other);
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}