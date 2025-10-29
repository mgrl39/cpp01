/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:19 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/29 17:32:14 by meghribe         ###   ########.fr       */
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
		std::string	get_name(void);
		void		set_name(std::string);
		Weapon	get_weapon(void);
		void		set_weapon(Weapon weapon);
		void	attack(void);
};

#endif
