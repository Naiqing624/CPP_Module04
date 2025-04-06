/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naiqing <naiqing@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:49:04 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/06 15:30:00 by naiqing          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	private:

	public:
		Cure();
		~Cure();
		Cure(const Cure &other);
		Cure &operator = (const Cure &other);

		AMateria	*clone() const;
		void	use(ICharacter &target);
};


#endif