/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:34:43 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/10 09:34:44 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "The memory address of str = " << &str << std::endl;
    std::cout << "The memory address held by stringPTR = " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF = " << &stringREF << std::endl;

    std::cout << "The value of str = " << str << std::endl;
    std::cout << "The value pointed to by stringPTR = " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF = " << stringREF << std::endl;
    return (0);
}