/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:41:52 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/29 17:50:42 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

HumanA::HumanA(Weapon weapon)
{
	this->weapon = weapon;
}

HumanA::~HumanA() {}

std::string	HumanA::get_name(void)
{
	return (this->name);
}

void	HumanA::set_name(std::string name)
{
	this->name = name;
}

Weapon	HumanA::get_weapon(void)
{
	return (this->weapon);
}

void	HumanA::attack(void)
{
	std::string	msg;

	msg = this->name;
	msg += " attacks with their ";
	msg += this->weapon.getType();
	std::cout << msg << std::endl;
}
