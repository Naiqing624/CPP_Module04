/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:59:27 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/06 16:33:54 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		_inventory[i] = nullptr;

}

Character::~Character()
{
	for(int i = 0; i < 4; i++)
		delete _inventory[i];
}

Character::Character(const Character &other) : ICharacter()
{
	this->_name = other._name;
	for(int i = 0; i < 4; i++)
	{
		if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = nullptr;
	}
}

// 你必须为每一个 materia clone() 一个新的，装进 b 的背包。
// 同样，在拷贝赋值前要先 delete 自己的旧 materia。
// Character a;
// Character b = a;   // ✅ 不能两个对象共享同一块 materia 内存！
Character &Character::operator=(const Character &other)
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
				this->_inventory[i] = nullptr;
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
		if (this->_inventory[i] == nullptr)
		{
			this->_inventory[i] = m;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3 && _inventory[idx])
	{
		_inventory[idx]->use(target);
	}
}