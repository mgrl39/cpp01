/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:26 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/31 21:16:44 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
#include <sstream>

static void	show_usage(char *argv)
{
	std::string	msg;

	msg = "takes filename and replaces every occurence of s1 with s2";
	std::cout << "Usage:" << std::endl;
	std::cout << argv << " filename s1 s2" << std::endl;
	std::cout << msg << std::endl;
}

int	main(int argc, char *argv[])
{
	std::ifstream	file;
	std::string	line;

	if (argc != 4)
		return (show_usage(argv[0]), 0);
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error opening file: " << argv[1] << std::endl;
		return (1);
	}
	if (!std::getline(file, line))
		std::cout << argv[1] << " is empty" << std::endl;
	while (std::getline(file, line))
	{
		//line.substr(0, line.
		std::cout << line << "\n";
	}
	file.close();
	return (0);
}

