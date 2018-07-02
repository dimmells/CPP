/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:05:05 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/20 12:05:08 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static void		ft_exit(int i) {
	if (i == 1)
		std::cout << "Wrong arg number" << std::endl;
	else if (i == 2)
		std::cout << "File does not exist" << std::endl;
	exit(0);
}

int				main(int ac, char **av) {
	if (ac != 4)
		ft_exit(1);
	std::string file = av[1];
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::ifstream		ifs(file);

	if (ifs.is_open()) {
		file.append(".replace");
		std::ofstream	ofs(file);
		std::string		line;
		std::size_t		index;
		while (getline(ifs, line)) {
			int		position = 0;
			while ((index = line.find(s1, position)) && (index != std::string::npos)) {
				line.replace(index, s1.length(), s2);
				position = index + s2.length();
			}
			ofs << line;
			if (!ifs.eof())
				ofs << std::endl;
		}
		ofs.close();
		ifs.close();
	}
	else
		ft_exit(2);
	return (0);
}
