/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:03:15 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/22 12:02:32 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_cpy_occurence.hpp"

int main(int argc, char **argv)
{
    std::string s1;
    std::string s2;
    std::ifstream   infile;
    std::ofstream   outfile;

    if (argc != 4)
        return (1);
    s1 = argv[2];
    s2 = argv[3];
    if (!create_file(argv[1], infile, outfile))
        return (1);
    if (!change_occurrence(s1, s2, infile, outfile))
    {
        infile.close();
        outfile.close();
        return (1);    
    }
    infile.close();
    outfile.close();
    return (0);
}