/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:25:57 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 11:25:58 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string str)
{
    name = str;
    std::cout << "construction de l'objet Zombie " << name << std::endl;
}

Zombie::Zombie(const Zombie& other_zombie)
{
    (void)other_zombie;
}

Zombie&  Zombie::operator=(const Zombie& other_zombie)
{
    (void)other_zombie;
    return (*this);
}

Zombie::~Zombie()
{
    std::cout << "destruction de l'objet Zombie " << name << std::endl;
}