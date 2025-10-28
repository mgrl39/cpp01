/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:28:38 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 16:17:30 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

int	main(int argc, char *argv[])
{
		Zombie	*my_horde;

		my_horde = zombieHorde(5, "Foo");
		delete [] my_horde;
		return (0);
}
