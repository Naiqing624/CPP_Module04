/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:49:23 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 10:31:56 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
	
}
AMateria::~AMateria()
{
	
}
AMateria::AMateria(const AMateria &other) : _type(other._type)
{
	
}
AMateria &AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		this->_type = other._type;
	return *this;
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}