/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:49:04 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 10:35:05 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class AMateria;

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