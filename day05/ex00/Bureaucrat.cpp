/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:27:24 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/25 12:27:27 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("bureaucrat") {
	_grade = 150;
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) {
	*this = copy;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade >= 1 && grade <= 150)
		_grade = grade;
	else if (grade < 1) {
		_grade = 150;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150) {
		_grade = 150;
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat() {
	return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & copy) {
	// _name = copy.getName();
	_grade = copy.getGrade();
	return (*this);
}

std::string const	Bureaucrat::getName() const {
	return (_name);
}

int					Bureaucrat::getGrade() const {
	return (_grade);
}

void				Bureaucrat::incGrade() {
	if (_grade > 1)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void				Bureaucrat::decGrade() {
	if (_grade < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & br) {
	o << "<" << br.getName() << ">, bureaucrat grade <" << br.getGrade() << ">";
	return (o);
}
