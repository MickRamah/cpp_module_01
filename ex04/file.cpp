/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zramahaz <zramahaz@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 12:02:01 by zramahaz          #+#    #+#             */
/*   Updated: 2025/02/22 12:03:28 by zramahaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_cpy_occurence.hpp"

int    create_file(char *filename, std::ifstream& infile, std::ofstream& outfile)
{
    std::string newFile;

    infile.open(filename);
    if (!infile.is_open())
    {
        if (infile.fail())
        {
            std::cerr << "Error : Error: source file cannot be opened\n" << std::endl;
            return (0);
        }
    }
    newFile = filename;
    newFile += ".replace";
    outfile.open(newFile.c_str());
    if (!outfile.is_open())
    {
        if (outfile.fail())
        {
            std::cerr << "Error : Error: destination file cannot be opened\n" << std::endl;
            infile.close();
            return (0);
        }
    }
    return (1);
}

int    change_occurrence(std::string& s1, std::string& s2, std::ifstream& infile, \
                            std::ofstream& outfile)
{
    std::string line;
    std::string newLine;
    size_t      pos;

    while (getline(infile, line))
    {
        pos = line.find(s1);
        while (pos != std::string::npos)
        {
            newLine.append(line, 0, pos);
            newLine.append(s2);
            line.erase(0, pos + s1.length());
            pos = line.find(s1);
        }
        newLine.append(line);
        outfile << newLine << '\n';
        newLine = "";
    }
    if (infile.bad())
    {
        std::cerr << "Error: Problem reading file.\n" << std::endl;
        return (0);
    }
    return (1);
}