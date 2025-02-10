/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 10:01:55 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/10 10:01:56 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string str)
{
    type = str;
}

const std::string&    Weapon::getType(void)
{
    return (type);
}

void    Weapon::setType(std::string new_type)
{
    type = new_type;
}
