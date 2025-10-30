/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:04:52 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/30 19:31:55 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>

void	Harl::debug(void)
{
	std::string	msg;

	msg = "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!";
	std::cout << msg << std::endl;
}

void	Harl::info(void)
{
	std::string	msg;

	msg = "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
	std::cout << msg << std::endl;
}

void	Harl::warning(void)
{
	std::string	msg;

	msg = "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.";
	std::cout << msg << std::endl;
}

void	Harl::error(void)
{
	std::string	msg;

	msg = "This is unacceptable! I want to speak to the manager now.";
	std::cout << msg << std::endl;
}

void	Harl::complain(std::string level)
{
	(void)level;
	//&this::warning();
}
