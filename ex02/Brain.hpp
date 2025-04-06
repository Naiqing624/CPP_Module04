/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 13:35:01 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/06 14:34:41 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	protected:
		std::string	_ideas[100];
		
	public:
		Brain();
		~Brain();
		Brain(const Brain &other);
		Brain &operator = (const Brain &other);
		
};

#endif