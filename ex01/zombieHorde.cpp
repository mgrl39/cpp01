/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:19:14 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 16:14:12 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombieHorde;
	int		i;

	i = -1;
	zombieHorde = new Zombie[N]();
	while (++i < N)
	{
			zombieHorde[i].set_name(name);
			zombieHorde[i].announce();
	}
	return (zombieHorde);
}
