/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meghribe <meghribe@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 14:44:47 by meghribe          #+#    #+#             */
/*   Updated: 2025/10/28 16:44:05 by meghribe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Weapon
{
	private:
		std::string	type;
	public:
		std::string	get_type(void);
		void		set_type(std::string type);

}
