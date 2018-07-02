/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 13:21:19 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/26 13:21:20 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <string.h>
# include <fstream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & copy);
	~PresidentialPardonForm();

	void			execute(Bureaucrat const & executor) const;

	PresidentialPardonForm &	operator=(PresidentialPardonForm const & copy);
	
};

#endif
