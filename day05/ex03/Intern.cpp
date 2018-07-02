/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 14:01:34 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 14:01:35 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(Intern const & copy) {
	*this = copy;
}

Intern::~Intern() {
	return ;
}

Form	*Intern::makeForm(std::string form, std::string target) {
	if (form == "shrubbery creation") {
		std::cout << "Intern creates <" << form << ">" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (form == "robotomy request") {
		std::cout << "Intern creates <" << form << ">" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else if (form == "presidential pardon") {
		std::cout << "Intern creates <" << form << ">" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else {
		std::cout << "ERROR: Intern cannot create <" << form << ">, because following form doesn't exist" << std::endl;
		return (NULL);		
	}
}

Intern & Intern::operator=(Intern const & copy) {
	if (&copy != this)
		return (*this);
	return (*this);
}
