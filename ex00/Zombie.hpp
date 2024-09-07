/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emencova <emencova@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 13:59:06 by emencova          #+#    #+#             */
/*   Updated: 2024/09/07 15:24:52 by emencova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <new>


class Zombie
{
private:

    std::string name;
public:
	Zombie(std::string name);
	~Zombie();
   
void    announce(void);
};

void randomChump(std::string name);
Zombie *newZombie(std::string name);
    
#endif