/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:21 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/29 18:03:29 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

std::string	HumanB::getName(void) const
{
	return (this->name);
}

void	HumanB::setName(std::string name)
{
	this->name = name;
}

Weapon	HumanB::getWeapon(void) const
{
	return (this->weapon);
}

void	HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}

void	HumanB::attack(void)
{
	std::string	msg;

	msg += this->name;
	msg += " attacks with their ";
	msg += this->weapon.getType();
	std::cout << msg << std::endl;
}
