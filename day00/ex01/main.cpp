/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:55:51 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/18 14:55:53 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"
#include <iostream>

static void		too_much(void) {
	std::cout << "Too much contacts...DELETE ALL....Saad((" << std::endl;
	std::cout << "...............SHUTKA)))................" << std::endl;
}

int				main(void) {
	Contact		contacts[CONTACT_NBR];
	std::string	input;
	std::string exit ("EXIT");
	std::string add ("ADD");
	std::string search ("SEARCH");
	int			i;

	i = 0;
	while ((i < CONTACT_NBR || true) && !std::cin.eof()) {
		getline(std::cin, input);
		if (add == input) {
			if (i < CONTACT_NBR)
				contacts[i].add_contact(i);
			else
				too_much();
			i++;
		}
		else if (search == input) {
			Contact::search_contacts(contacts);
		}
		else if (exit == input)
			return (0);
		else {
			std::cout << "Command \"" << input << "\" does not exist" << std::endl;
			std::cout << "Try: ADD, SEARCH or EXIT" << std::endl;
		}
	}
}
