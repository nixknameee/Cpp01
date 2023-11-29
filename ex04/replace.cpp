/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:03:14 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/27 17:03:17 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <fstream>
#include <sstream>

bool replace(const std::string& filename, const std::string& string1, const std::string& string2)
{
    std::ifstream inputFile(filename.c_str());
    if (!inputFile) 
    return false;

    std::ostringstream ss;
    ss << inputFile.rdbuf();
    std::string content = ss.str();
    inputFile.close();

    size_t pos = 0;
    while ((pos = content.find(string1, pos)) != std::string::npos)
    {
        content = content.substr(0, pos) + string2 + content.substr(pos + string1.length()); // last evaluation ERR
        pos += string2.length();
    }

    std::ofstream outFile((filename + ".replace").c_str());
    if (!outFile) 
    return false;

    outFile << content;
    outFile.close();

    return true;
}

