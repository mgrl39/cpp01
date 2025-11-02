/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:25 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/02 21:12:26 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	private:
		std::string	name;
		Weapon	*weapon;
	public:
		HumanB(std::string name);
		HumanB();
		~HumanB();
		std::string	getName(void) const;
		void		setName(std::string name);
		Weapon	getWeapon(void);
		void		setWeapon(Weapon &weapon);
		void	attack(void);
};

#endif
