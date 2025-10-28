/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:31:29 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 15:55:20 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void	randomChump(std::string name);

int	main(int argc, char *argv[])
{
	Zombie *zombie = NULL;

	zombie = newZombie("Foo");
	zombie->announce();
	randomChump("Bar");
	delete zombie;
	return ((void)argc, (void)argv, 0);
}
