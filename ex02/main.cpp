/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:03:48 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/27 17:30:11 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(int argc, char *argv[])
{
	std::string	string;

	string = "HI THIS IS BRAIN";
	std::string	*stringPTR;
	std::string	&stringREF = string;

	stringPTR = &string;

	std::cout << &string << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	return ((void)argc, (void)argv, 0);
}
