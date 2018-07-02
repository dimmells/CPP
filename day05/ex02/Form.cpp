/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:29:53 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/25 14:29:56 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default_form"), _isSigned(false), _reqGrade(1), _execGrade(1) {
	return ;
}

Form::Form(Form const & copy) : _reqGrade(1), _execGrade(1) {
	*this = copy;
}

Form::Form(std::string name, int reqGrade, int execGrade) : _name(name), _reqGrade(reqGrade), _execGrade(execGrade) {
	_isSigned = false;
	if (reqGrade < 1 || execGrade < 1) 
		throw Form::GradeTooHighException();
	if (reqGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
	return ;
}

Form & Form::operator=(Form const & copy) {
	_isSigned = copy.getIsSigned();
	return (*this);
}

std::string const	Form::getName() const {
	return (_name);
}

std::string const	Form::getTarget() const {
	return (_target);
}

bool				Form::getIsSigned() const {
	return (_isSigned);
}

int					Form::getReqGrade() const {
	return (_reqGrade);
}

int					Form::getExecGrade() const {
	return (_execGrade);
}

void				Form::setTarget(std::string target) {
	_target = target;
}

void				Form::beSigned(Bureaucrat const & bur) {
	if (_isSigned)
		throw Form::FormAlreadySignedException();
	else {
		if (bur.getGrade() <= _reqGrade) {
			_isSigned = true;
			std::cout << "Bureaucrat <" << bur.getName() << "> signs form <" << _name << ">" << std::endl;
		}
		else {
			std::cout << "Bureaucrat <" << bur.getName() << "> cannot signs form <" << _name << ">" << std::endl;
			throw Form::GradeTooLowException();
		}
	}
}

std::ostream &	operator<<(std::ostream & o, Form const & form) {
	std::cout << "------------------" << std::endl;
	std::cout << "Form: " << form.getName() << std::endl;
	std::cout << "Target: " << form.getTarget() << std::endl;
	std::cout << "Is signed: " << form.getIsSigned() << std::endl;
	std::cout << "Required grade: " << form.getReqGrade() << std::endl;
	std::cout << "Execution grade: " << form.getExecGrade() << std::endl;
	std::cout << "------------------" << std::endl;
	return (o);
}
