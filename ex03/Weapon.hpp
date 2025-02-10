/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:01:59 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/10 10:02:01 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class   Weapon
{
    private:
        std::string type;

    public:
        Weapon(std::string str);

        const std::string&    getType(void);
        void    setType(std::string new_type);
};

#endif
