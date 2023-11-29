/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:54:11 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/24 15:54:16 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Zombie.hpp"

int main(void)
{
    Zombie *alloc_newZombie = newZombie("Grigorii");
    alloc_newZombie->announce(); 
    randomChump("Nikoll");
    delete(alloc_newZombie);
}
