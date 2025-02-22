/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_cpy_occurence.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:34:37 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/22 12:03:20 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_CPY_OCCURENCE_HPP
# define FILE_CPY_OCCURENCE_HPP

#include <iostream>
#include <fstream>

int    create_file(char *filename, std::ifstream& infile, std::ofstream& outfile);
int    change_occurrence(std::string& s1, std::string& s2, std::ifstream& infile, \
                            std::ofstream& outfile);

#endif