/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:31:29 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/27 16:39:23 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// TODO: delete this later...
#include <string>
#include <iostream>

int	main(int argc, char *argv[])
{
		Zombie	*zombie = NULL;

		(void)zombie;
		zombie = zombie->newZombie("Pep");
		zombie->announce();
		delete zombie;

		return ((void)argc, (void)argv, 0);
}
