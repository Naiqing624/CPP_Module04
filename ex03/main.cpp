/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 09:28:38 by nacao             #+#    #+#             */
/*   Updated: 2025/04/07 13:18:04 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/MateriaSource.hpp"
#include "include/Ice.hpp"
#include "include/Cure.hpp"
#include "include/IMateriaSource.hpp"
#include "include/Character.hpp"


int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;

    // std::cout << "-------------------------" << std::endl;

    // IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// ICharacter* me = new Character("me");

	// // 创建4个 materia，每一个都确保只装备一次
	// AMateria* m1 = src->createMateria("ice");
	// me->equip(m1); // ownership  me

	// AMateria* m2 = src->createMateria("cure");
	// me->equip(m2); // ownership  me

	// AMateria* m3 = src->createMateria("ice");
	// me->equip(m3); // ownership  me

	// AMateria* m4 = src->createMateria("cure");
	// me->equip(m4); // ownership  me

	// ICharacter* bob = new Character("bob");

	// me->use(0, *bob);
	// me->use(1, *bob);
	// me->use(2, *bob);
	// me->use(3, *bob);
	// me->use(42, *bob); 

	// delete bob;
	// delete me;
	// delete src;

    return 0;
}