/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:23:12 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/10 10:23:13 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  HUMAN_A_H
# define    HUMAN_A_H

# include "Weapon.hpp"

class   HumanA
{
    private:
        Weapon&  weapon;
        std::string name;

    public:
        HumanA(std::string str, Weapon& club);
        void    attack(void);
};

#endif