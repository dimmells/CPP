/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:45:52 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 18:45:53 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human
{
public:
	Human();
	~Human();
	const Brain			&getBrain(void);
	std::string		identify( void ) const;
private:
	Brain const _brain;
};

#endif
