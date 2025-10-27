/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:31:29 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/27 16:35:13 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// TODO: delete this later...
#include <string>
#include <iostream>

int	main(int argc, char *argv[])
{
		Zombie	*zombie = NULL;
		//std::string	patata;

		(void)zombie;
		zombie->newZombie("Pep");
		zombie->announce();
		//patata = "jaume";
		//std::cout << patata << std::endl;
		delete zombie;

		return ((void)argc, (void)argv, 0);
}
