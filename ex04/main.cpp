/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:42:26 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 18:18:42 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

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
	if (argc != 3)
		show_usage(argv[0]);
	return (0);
}

