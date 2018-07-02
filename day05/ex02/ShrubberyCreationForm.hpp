/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:08:13 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 11:08:14 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string.h>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & copy);
	~ShrubberyCreationForm();

	void			execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & copy);
	
};
