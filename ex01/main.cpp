/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:28:38 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/07 23:04:35 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <cstdlib>

int	main(int argc, char *argv[])
{
	Zombie	*my_horde;
	int	i;
	int	N;

	N = 5;
	if (argc > 1)
		N = std::atoi(argv[1]);
	my_horde = zombieHorde(N, "Foo");
	i = -1;
	while (++i < N)
		my_horde[i].announce();
	delete [] my_horde;
	return (0);
}
