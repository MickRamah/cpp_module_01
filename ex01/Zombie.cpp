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

Zombie::Zombie()
{
    std::cout << "creation de l'objet Zombie" << std::endl;
}

Zombie::Zombie(const Zombie& other_zombie)
{
    (void)other_zombie;
}
