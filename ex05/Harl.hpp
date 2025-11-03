/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 16:52:04 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/03 18:49:12 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		typedef void (Harl::*pointerMemberFunction)(void);
		pointerMemberFunction functions[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	public:
		Harl();
		~Harl();
		void	complain(std::string level);
};

#endif
