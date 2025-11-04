/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:26 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/04 19:14:02 by meghribe         ###   ########.fr       */
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

	std::cout << "Usage:" << std::endl;
	std::cout << "\t" << argv << " filename s1 s2" << std::endl;
	msg = "takes filename and replaces every occurence of s1 with s2";
	std::cout << msg << std::endl;
}

/* 
 * i is unsigned long because when is int shows this message:
 * 	error: comparison of integers of different signs: 'int' and 'const'
 */
void	replace_all(std::string &s, \
		const std::string &search,const std::string &replace)
{
	unsigned long i;

	i = 0;
	while (1)
	{
		i = s.find(search, i);
		if (i == std::string::npos)
			break ;
		s.erase(i, search.length());
		s.insert(i, replace);
		i += replace.length();
	}
}

int	check_args(int argc, char *argv[])
{
	std::string	str_to_check;
	std::string	error_text = "";
	std::string	errors[3] = {"name of file", "old text", "new text"};
	int		i;

	if (argc != 4)
		return (1);
	i = 0;
	while (++i < 4)
	{
		str_to_check = argv[i];
		if (str_to_check.length() == 0)
			error_text = "ERROR: is necessary the " + errors[i - 1];
	}
	if (error_text != "")
	{
		std::cout << error_text << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	std::ifstream	file;
	std::ofstream	final_file;
	std::string	line;
	std::string	file_changed;

	if (check_args(argc, argv))
		return (show_usage(argv[0]), 1);
	file.open(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error opening file: " << argv[1] << std::endl;
		return (1);
	}
	if (!std::getline(file, line))
		std::cout << argv[1] << " is empty" << std::endl;
	do 
	{
		if (line.length() == 0)
			continue ;
		replace_all(line, argv[2], argv[3]);
		file_changed += line + '\n';
	} 
	while (std::getline(file, line));
	/*
	while (std::getline(file, line))
	{
		if (line.length() == 0)
			continue ;
		replace_all(line, argv[2], argv[3]);
		file_changed += line;
	}*/
	final_file.open(argv[1]);
	final_file << file_changed;
	std::cout << std::endl;
	file.close();
	return (0);
}

