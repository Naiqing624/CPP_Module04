/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nacao <nacao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 14:58:37 by naiqing           #+#    #+#             */
/*   Updated: 2025/04/07 13:18:44 by nacao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
class AMateria;

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_templates[4];
    public:
        MateriaSource();
        ~MateriaSource();
        MateriaSource(const MateriaSource &other);
        MateriaSource &operator = (const MateriaSource &other);

        void    learnMateria(AMateria *m);
        AMateria *createMateria(std::string const &type);
};

#endif