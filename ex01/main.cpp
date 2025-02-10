/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:15:08 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 14:15:09 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  *ptr_zombie;
    Zombie  *tmp;
    Zombie  *current;

    ptr_zombie = zombieHorde(10, "Mick");
    current = ptr_zombie;
    while (current)
    {
        current->announce();
        current = current->next;
    }
    while (ptr_zombie)
    {
        tmp = ptr_zombie->next;
        delete ptr_zombie;
        ptr_zombie = tmp;
    }
    return (0);
}