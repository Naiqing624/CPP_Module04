/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:58:07 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/06 16:23:27 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
		
	public:
		Character(std::string name);
		~Character();
		Character(const Character &other);
		Character &other(const Character &other);

		std::string const &getName() const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

// 拿个名字（getName）

// 拿着背包（inventory）

// 装备魔法（equip）

// 丢掉魔法（unequip）

// 使用魔法攻击别人（use）

#endif