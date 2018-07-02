/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 13:09:31 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/19 13:09:33 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <string>

class Pony
{
public:
	Pony();
	~Pony();
	std::string	getName( void ) const;
	int			getAge( void ) const;
	int			getHeight( void ) const;
	int			getWeight( void ) const;
	void		setName(std::string newName);
	void		setAge(int newAge);
	void		setHeight(int newHeight);
	void		setWeight(int newWeight);

private:
	std::string		_name;
	int				_age;
	int				_height;
	int				_weight;
};

#endif
