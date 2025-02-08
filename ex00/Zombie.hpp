/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 11:25:35 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/08 11:25:37 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
#include <cstdlib>

class   Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        Zombie(const Zombie& other_zombie);
        Zombie&  operator=(const Zombie& other_zombie);
        ~Zombie();

        void    announce(void)
        {
            std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
        }
};

Zombie  *newZombie(std::string name);

void    randomChump(void);

#endif