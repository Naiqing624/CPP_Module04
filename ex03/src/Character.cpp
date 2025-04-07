/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:59:27 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 12:39:32 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = NULL;

}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete _inventory[i];
	}
}

Character::Character(const Character &other)
{
	this->_name = other._name;
	for(int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
	}
}

// 你必须为每一个 materia clone() 一个新的，装进 b 的背包。
// 同样，在拷贝赋值前要先 delete 自己的旧 materia。
// Character a;
// Character b = a;   // ✅ 不能两个对象共享同一块 materia 内存！
Character	&Character::operator = (const Character &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		for(int i = 0; i < 4; i++)
		{
			delete _inventory[i];
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		_inventory[idx]->use(target);
	}
	else
		std::cout << "Please use between 0-3" << std::endl;
}