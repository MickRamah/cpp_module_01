/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:25:01 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 14:25:02 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static Zombie *get_last_zombie(Zombie **head)
{
    Zombie  *last;

    last = *head;
    while (last->next)
        last = last->next;
    return (last);
}

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *new_zombie = NULL;
    Zombie  *head = NULL;
    Zombie  *last = NULL;

    for (int i = 0; i < N; i++)
    {
        new_zombie = new Zombie(name);
        if (head == NULL)
            head = new_zombie;
        else
        {
            last = get_last_zombie(&head);
            last->next = new_zombie;
        }
    }
    return (head);
}
