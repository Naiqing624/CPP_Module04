/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 15:00:31 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 11:42:15 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource() : IMateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		this->_templates[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_templates[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) : IMateriaSource(other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other._templates[i])
				this->_templates[i] = other._templates[i]->clone();
			else
				this->_templates[i] = NULL;
	}
}

MateriaSource &MateriaSource::operator = (const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_templates[i];
			if (other._templates[i])
			{
				this->_templates[i] = other._templates[i]->clone();
			}
			else
				this->_templates[i] = NULL;
		}
	}
	return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i] == NULL)
		{
			this->_templates[i] = m;
			break;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_templates[i] && this->_templates[i]->getType() == type)
		{
			return (this->_templates[i]->clone());
		}
	}
	return (0);
}