/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 12:38:02 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 12:38:04 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
# include <string.h>
# include <fstream>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & copy);
	~RobotomyRequestForm();

	void			execute(Bureaucrat const & executor) const;

	RobotomyRequestForm &	operator=(RobotomyRequestForm const & copy);
	
};

#endif
