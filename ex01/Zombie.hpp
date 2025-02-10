/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 14:15:20 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 14:15:21 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define    ZOMBIE_H

#include <iostream>

class   Zombie
{
    private:
        std::string name;

    public:
        Zombie  *next;

        Zombie(std::string str);
        Zombie(const Zombie& other_zombie);
        Zombie& operator=(const Zombie& other_zombie);
        ~Zombie();

        void    announce(void);
};

Zombie  *zombieHorde(int N, std::string name);

#endif