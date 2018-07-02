/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:08:17 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 11:08:18 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("shrubbery creation", 145, 137) {
	this->setTarget("default_target");
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137) {
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & copy) : Form(copy.getName(), copy.getReqGrade(), copy.getExecGrade()) {
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

void				ShrubberyCreationForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned()) {
		if (executor.getGrade() <= this->getExecGrade()) {
			std::string file  = this->getTarget();
			file.append("_shrubbery");
			std::ofstream out(file);
			out << "	             ,@@@@@@@,					" << std::endl;
			out << "       ,,,.   ,@@@@@@/@@,  .oo8888o.		" << std::endl;
			out << "    ,&%%&%&&%,@@@@@/@@@@@@,888888/8o		" << std::endl;
			out << "   ,%&%%&&%&&%,@@@@@@@/@@@88888888/88'		" << std::endl;
			out << "   %&&%&%&/%&&%@@@@@/ /@@@88888888888'		" << std::endl;
			out << "   %&&%/ %&%%&&@@@ V /@@' `8888 `/88'		" << std::endl;
			out << "   `&%% ` /%&'    |.|         |'|8'			" << std::endl;
			out << "       |o|        | |         | |			" << std::endl;
			out << "       |.|        | |         | |			" << std::endl;
			out << "	 \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_	" << std::endl;
			out.close();
		}
		else
			throw ShrubberyCreationForm::GradeTooLowException();
	}
	else
		throw ShrubberyCreationForm::FormNotSignedException();
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=(ShrubberyCreationForm const & copy) {
	this->setTarget(copy.getTarget());
	return (*this);
}
