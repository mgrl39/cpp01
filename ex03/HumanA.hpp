/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:19 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/29 18:06:43 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
	private:
		std::string	name;
		Weapon		weapon;

	public:
		HumanA(std::string name, Weapon weapon);
		HumanA(Weapon weapon);
		~HumanA();
		std::string	getName(void) const;
		void		setName(std::string);
		Weapon	getWeapon(void) const;
		void		setWeapon(Weapon weapon);
		void	attack(void);
};

#endif
