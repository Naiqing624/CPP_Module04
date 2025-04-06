/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:11:18 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/06 11:13:26 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Default";
	std::cout << "Animal construtor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destrutor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal	&Animal::operator = (const Animal &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return (*this);
}

const std::string &Animal::getType() const
{
	return (this->_type);
}