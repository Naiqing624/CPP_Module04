/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 10:09:58 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 13:14:42 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	//const Animal *test = new Animal();
	const Animal* dog1 = new Dog();
	const Animal* cat1 = new Cat();

	std::cout << dog1->getType() << std::endl;
	dog1->makeSound();
	std::cout << cat1->getType() << std::endl;
	cat1->makeSound();

	delete cat1;
	delete dog1;

	std::cout << "--------------------------" << std::endl;
	
	const Animal *animals[4];

	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();

	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete animals[i];
	
	return (0);
}