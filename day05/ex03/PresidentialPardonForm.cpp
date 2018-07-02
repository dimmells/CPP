/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:21:24 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 13:21:26 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("presidential pardon", 72, 45) {
	this->setTarget("default_target");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("presidential pardon", 72, 45) {
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & copy) : Form(copy.getName(), copy.getReqGrade(), copy.getExecGrade()) {
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

void				PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned()) {
		if (executor.getGrade() <= this->getExecGrade()) {
			std::cout << "<" << this->getTarget() << "> has been pardoned by Zaphod Beeblebrox" << std::endl;
		}
		else
			throw PresidentialPardonForm::GradeTooLowException();
	}
	else
		throw PresidentialPardonForm::FormNotSignedException();
}

PresidentialPardonForm &	PresidentialPardonForm::operator=(PresidentialPardonForm const & copy) {
	this->setTarget(copy.getTarget());
	return (*this);
}
