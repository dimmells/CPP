/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 12:27:19 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/25 12:27:21 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string.h>
# include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(Bureaucrat const & copy);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();

	Bureaucrat & operator=(Bureaucrat const & copy);

	std::string const	getName() const;
	int					getGrade() const;
	void				incGrade();
	void				decGrade();

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

private:
	std::string const	_name;
	int					_grade;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & br);

#endif
