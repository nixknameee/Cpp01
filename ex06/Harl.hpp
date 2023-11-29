/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:50:41 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/28 08:50:43 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef HARL_HPP
#define HARL_HPP

#include <iomanip>  
#include <iostream>
#include <string>
#include <sstream>

#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define REVERSED "\033[7m"
#define HIDDEN "\033[8m"
#define RESET "\033[0m"

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"


class Harl
{
    private:
            void debug( void );
            void info( void );
            void warning( void );
            void error( void );

    public:
            Harl();
            ~Harl();
            void complain( std::string level );    


};


#endif
