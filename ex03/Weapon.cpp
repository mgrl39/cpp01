/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:30 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/29 17:45:00 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string	Weapon::get_type(void)
{
	return (this->type);
}

void	Weapon::set_type(std::string type)
{
	this->type = type;
}
