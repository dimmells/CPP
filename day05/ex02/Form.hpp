/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 14:29:59 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/25 14:30:01 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <string.h>
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
public:
	Form();
	Form(Form const & copy);
	Form(std::string name, int reqGrade, int execGrade);
	~Form();

	Form & operator=(Form const & copy);

	std::string const	getName() const;
	std::string const	getTarget() const;
	bool				getIsSigned() const;
	int					getReqGrade() const;
	int					getExecGrade() const;

	void				setTarget(std::string target);

	void				beSigned(Bureaucrat const & bur);
	virtual void				execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade too hight");
			}
		
	};

	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Grade too low");
			}
		
	};

	class FormAlreadySignedException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("Form already sigend");
			}
	};

	class FormNotSignedException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("This form is not sigend yet");
			}
	};

private:
	std::string const	_name;
	std::string			_target;
	bool				_isSigned;
	int	const			_reqGrade;
	int	const			_execGrade;

};

std::ostream &	operator<<(std::ostream & o, Form const & form);

#endif
