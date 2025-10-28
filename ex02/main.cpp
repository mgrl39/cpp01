/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 15:11:53 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 15:11:53 by meghribe         ###   ########.fr       */
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
	std::cout << "The memory address of the string variable:" << std::endl;
	std::cout << &string << std::endl;
	std::cout << "The memory address held by stringPTR:" << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:" << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << "The value of the string variable:" << std::endl;
	std::cout << string << std::endl;
	std::cout << "The value pointed to by stringPTR:" << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:" << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}
