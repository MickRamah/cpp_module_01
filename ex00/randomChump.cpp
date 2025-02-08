/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:46:42 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 11:46:44 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string generate_random_name(void)
{
    const char    *str = "abcdefghijklmnopqrstuvwxyz";
    int     random_index;
    int     i;
    std::string name;

    i = 0;
    while (i < 3)
    {
        random_index = rand() % 22;
        name += str[random_index];
        i++;
    }
    return (name);
}

void    randomChump(void)
{
    Zombie  *zombie;
    std::string name;

    srand(time(0));
    name = generate_random_name();
    zombie = newZombie(name);
    zombie->announce();
    delete zombie;
    return ;
}
