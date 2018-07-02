/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:39:01 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/20 14:39:02 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>

class Human
{
private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

public:
	void	 action(std::string const & action_name, std::string const & target);
};

#endif
