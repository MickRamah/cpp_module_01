/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:23:20 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/10 10:23:21 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMAN_B_H
# define    HUMAN_B_H

# include "Weapon.hpp"

class   HumanB
{
    private:
        Weapon  *weapon;
        std::string name;

    public:
        HumanB(std::string str);

        void    attack(void);
        void    setWeapon(Weapon& club);
};

#endif