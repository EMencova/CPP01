/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 14:03:14 by emencova          #+#    #+#             */
/*   Updated: 2024/09/07 15:14:51 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *new_zombie;
    Zombie *new_chump = NULL;

    std::cout << "What is the Zombie name? ";
    std::string zombie_name;
    std::cin >> zombie_name;
    std::cout << "What is the RnadomChump name? ";
    std::string chump_name;
    std::cin >> chump_name;
    
    new_zombie = newZombie(zombie_name);
    randomChump(chump_name);
    delete new_zombie;
    delete new_chump;
    return 0;
}


