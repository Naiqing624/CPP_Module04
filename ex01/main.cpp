/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 19:42:42 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 13:11:45 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "------------------------------------------" << std::endl;

	const Animal *animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();
	
	for (int i = 0; i < 4; i++)
		animals[i]->makeSound();

	for (int i = 0; i < 4; i++)
		delete animals[i];

	std::cout << "---------deep copy------------------------" << std::endl;
	
	Dog dog1;
	dog1.setIdea(0, "Eat sausage");
	Dog dog2 = dog1;

	dog1.setIdea(0, "Chase cat");

	std::cout << dog1.getIdea(0) << std::endl;
	std::cout << dog2.getIdea(0) << std::endl;
	return (0);
}