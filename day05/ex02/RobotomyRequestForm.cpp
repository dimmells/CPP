/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:38:07 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 12:38:08 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("robotomy request", 72, 45) {
	this->setTarget("default_target");
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("robotomy request", 72, 45) {
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & copy) : Form(copy.getName(), copy.getReqGrade(), copy.getExecGrade()) {
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

void				RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned()) {
		if (executor.getGrade() <= this->getExecGrade()) {
			std::cout << "DrDRdRDRDr bzzzzzZZ... and other drilling noises" << std::endl;
			if (rand() % 2)
				std::cout << "<" << this->getTarget() << "> has been robotomized successfully" << std::endl;
			else
				std::cout << "<" << this->getTarget() << "> has been robotomized failure" << std::endl;
		}
		else
			throw RobotomyRequestForm::GradeTooLowException();
	}
	else
		throw RobotomyRequestForm::FormNotSignedException();
}

RobotomyRequestForm &	RobotomyRequestForm::operator=(RobotomyRequestForm const & copy) {
	this->setTarget(copy.getTarget());
	return (*this);
}
