/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:49:31 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 11:39:43 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{

}

Ice::Ice(const Ice &other) : AMateria(other)
{
	
}

Ice	&Ice::operator=(const Ice &other)
{
	AMateria::operator = (other);
	return (*this);
}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}