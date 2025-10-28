/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:20:37 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 16:13:41 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie {
	private:
		std::string	name;
		
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		std::string	get_name(void) const;
		void		set_name(std::string name);
		void		announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
