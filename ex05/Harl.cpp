/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:50:32 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/28 08:50:35 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void Harl::complain(std::string level)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*functions[i])();
            return;
        }
    }
}


void Harl::debug( void )
{
    std::cout << UNDERLINE << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << RESET << std::endl;
}
void Harl::info( void )
{
    std::cout << UNDERLINE << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << RESET << std::endl;
}
void Harl::warning( void )
{
    std::cout << UNDERLINE << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << RESET << std::endl;
}
void Harl::error( void )
{
    std::cout << UNDERLINE << "This is unacceptable! I want to speak to the manager now." << RESET << std::endl;
}

