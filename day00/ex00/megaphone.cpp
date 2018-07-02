/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 13:28:49 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/18 13:40:01 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int			main(int ac, char **av)
{
	int		i;
	int		j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				av[i][j] = toupper(av[i][j]);
				j++;
			}
			std::cout << av[i];
			i++;
		}
		std::cout << std::endl;
	}
}
