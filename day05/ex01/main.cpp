/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:27:31 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/25 12:27:33 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main() {
	Bureaucrat	br("HHA", 2);
	Form		form("Harassment", 1, 14);

	try
	{
		std::cout << form;
		// br.incGrade();
		br.signForm(form);
		form.beSigned(br);
		std::cout << form;
		std::cout << br << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
