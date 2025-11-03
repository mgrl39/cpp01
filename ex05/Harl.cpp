/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:04:52 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/03 18:49:25 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


void	Harl::complain(std::string level)
{
	int	i;

	std::string	comment_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	/*
	void	(Harl::*display_functions[4])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};*/
	void	(Harl::*func_ptr[4])(void);
	func_ptr[0] = &Harl::debug;
	func_ptr[1] = &Harl::info;
	func_ptr[2] = &Harl::warning;
	func_ptr[3] = &Harl::error;
	i = 0;
	while (i < 4)
	{
		if (level == comment_levels[i])
		{
			(void)functions;
			this->functions[i]();
//			*((functions[i])(void));
//			func_ptr[i](void);
			//(*func_ptr[i])();
			/*
			(complain_text[0](this))();
			(*complain_text[0]());
			*/
//			*(complain_text[i]());
			/*
			(ptrToMemberFunc[0])();
			ptrToMemberFunc()[0];
			ptrToMemberFunc[0]();
			(*ptrToMemberFunc[0])();
			(&ptrToMemberFunc[0])();
			*(ptrToMemberFunc[0])();
			*/
			//*(functions[i])();
			//(functions[i])();
			//(functions[i])();
			//(*(functions[i]))();
			//(functions[i])();
			//(*functptr[0])();
			/*
			std::cout << "true" << std::endl;
			(void)(&(functions)[0])();
			(void)((functions)[0])();
			*functions[0]();
			pointerMemberFunction()[0];
			*pointerMemberFunction()[0];
			*(pointerMemberFunction[0]());
			pointerMemberFunction[0]();
			*/
			//void (Harl::*ptrToMemberFunc)(void) = &Harl::debug;
			//*pointerMemberFunction();
			//display_functions[0];
			//display_functions[0]();
			//(*display_functions[0])();
			break ;
		}
		i++;
	}
	//&this::warning();
}

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
Harl::Harl() {}
Harl::~Harl() {}
