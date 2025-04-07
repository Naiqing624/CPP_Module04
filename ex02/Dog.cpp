/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 11:15:14 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 13:21:58 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog construtor called" << std::endl;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destrutor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	this->_type = other.getType();
	this->_brain = new Brain(*other._brain);
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
		delete _brain;
		this->_brain = new Brain(*other._brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}
