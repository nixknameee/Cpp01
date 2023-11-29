/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:46:33 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/27 16:46:35 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdio>
#include "replace.hpp"

bool isFileEmpty(const std::string& filename)
{
    FILE* file = std::fopen(filename.c_str(), "r");
    if (file)
    {
        std::fseek(file, 0, SEEK_END);
        long size = std::ftell(file);
        std::fclose(file);
        return size == 0;
    }
    return false;
}

int main(int argc, char* argv[])
{
    if (argc != 4)
    {
        std::cerr << "Usage:" << RED "./SedIsForLosers " << RESET "<s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string string1 = argv[2];
    std::string string2 = argv[3];
    
 
    if (string1.empty())
    {
        std::cout << RED << "String 1 is empty, try again"<< RESET << std::endl;
        return 1;
    }
    else if (string2.empty())
    {
        std::cout << RED << "String 2 is empty, try again" << RESET << std::endl;
    }

    if (isFileEmpty(filename))
    {
        std::cout << RED << "The file is empty, try again "<< RESET << std::endl;
        return 1;
    }
    if (!replace(filename, string1, string2))
    {
        std::cerr << "Error" << std::endl;
        return 1;
    }

    return 0;
}
