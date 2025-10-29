/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:44:47 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/29 18:08:25 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP 

# include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon();
		~Weapon();
		Weapon(std::string	type);
		std::string	getType(void);
		void		setType(std::string type);

};

#endif
