/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/27 11:41:09 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/27 11:41:11 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>

static void	print_char(char * arg, double d) {
	char c = static_cast<char>(d);
	if (isinf(d) || d > 255 || d < 0 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(d))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << c << "'" << std::endl;
}

static void	print_int(double d) {
	int	i = static_cast<int>(d);
	if (d < INT_MIN || d > INT_MAX || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

int			main(int ac, char **av) {
	float	f;
	double	d;

	if (ac != 2) {
		std::cout << "usage: ./convert <arg>" << std::endl;
		return (0);
	}
	d = static_cast<double>(atof(av[1]));
	f = static_cast<float>(d);
	print_char(av[1], d);
	print_int(d);
	std::cout << std::fixed;
	std::cout << "float: " << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::setprecision(1) << d << std::endl;
}
