/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:45:24 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/25 23:45:28 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    int N = 50;

    Zombie* band = zombieHorde(N, "Zombie");
    for (int i = 0; i < N; i++)
    {
        band[i].announce();
    }
    delete[] band; 
    
}
