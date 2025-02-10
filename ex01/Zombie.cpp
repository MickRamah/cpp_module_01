/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:24:57 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 14:24:58 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
    next = NULL;
    std::cout << "creation de l'objet Zombie " << name << " " << this << std::endl;
}

Zombie::Zombie(const Zombie& other_zombie)
{
    (void)other_zombie;
}

Zombie& Zombie::operator=(const Zombie& other_zombie)
{
    (void)other_zombie;
    return (*this);
}

Zombie::~Zombie()
{
    std::cout << "destruction de l'objet Zombie " << name << " " << this << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}