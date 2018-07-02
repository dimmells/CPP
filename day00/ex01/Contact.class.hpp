/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                           	    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:39:25 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/18 14:39:28 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# define CONTACT_NBR 8
# include <string>

class Contact
{

private:
	int			_nbr;
	std::string	_first_name;
	std::string	_last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_address;
	std::string _email;
	std::string _phone_number;
	std::string _birthday;
	std::string _fav_meal;
	std::string _undw_color;
	std::string _darkest_secret;

public:
	Contact();
	~Contact();
	int			getNbr( void ) const;
	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string	getNickname( void ) const;
	std::string	getLogin( void ) const;
	std::string	getPostalAddress( void ) const;
	std::string	getEmail( void ) const;
	std::string	getPhoneNumber( void ) const;
	std::string	getBirthday( void ) const;
	std::string	getFavMeal( void ) const;
	std::string	getUndwColor( void ) const;
	std::string	getDarkestSecret( void ) const;
	void		setNbr(int nbr);
	void		setFirstName(std::string new_data);
	void		setLastName(std::string new_data);
	void		setNickname(std::string new_data);
	void		setLogin(std::string new_data);
	void		setPostalAddress(std::string new_data);
	void		setEmail(std::string new_data);
	void		setPhoneNumber(std::string new_data);
	void		setBirthday(std::string new_data);
	void		setFavMeal(std::string new_data);
	void		setUndwColor(std::string new_data);
	void		setDarkestSecret(std::string new_data);
	
	void 			add_contact(int nbr);
	static void		search_contacts(Contact contacts[CONTACT_NBR]);
	
};

#endif
