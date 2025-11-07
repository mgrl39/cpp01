/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:44:47 by meghribe          #+#    #+#             */
/*   Updated: 2025/11/07 22:11:33 by meghribe         ###   ########.fr       */
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
		const std::string	&getType(void) const;
		void		setType(std::string type);

};

#endif
