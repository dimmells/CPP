/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmelnyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 14:51:05 by dmelnyk           #+#    #+#             */
/*   Updated: 2018/06/18 14:51:07 by dmelnyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact( void ) {
	Contact::_nbr = 0;
	return;
}

Contact::~Contact( void ) {
	return;
}

int				Contact::getNbr( void ) const {
	return this->_nbr;
}

std::string		Contact::getFirstName( void ) const {
	return this->_first_name;
}

std::string		Contact::getLastName( void ) const {
	return this->_last_name;
}

std::string		Contact::getNickname( void ) const {
	return this->_nickname;
}

std::string		Contact::getLogin( void ) const {
	return this->_login;
}

std::string		Contact::getPostalAddress( void ) const {
	return this->_postal_address;
}

std::string		Contact::getEmail( void ) const {
	return this->_email;
}

std::string		Contact::getPhoneNumber( void ) const {
	return this->_phone_number;
}

std::string		Contact::getBirthday( void ) const {
	return this->_birthday;
}

std::string		Contact::getFavMeal( void ) const {
	return this->_fav_meal;
}

std::string		Contact::getUndwColor( void ) const {
	return this->_undw_color;
}

std::string		Contact::getDarkestSecret( void ) const {
	return this->_darkest_secret;
}

void			Contact::setNbr(int nbr) {
	this->_nbr = nbr;
	return;
}

void			Contact::setFirstName(std::string new_data) {
	this->_first_name = new_data;
	return;
}

void			Contact::setLastName(std::string new_data) {
	this->_last_name = new_data;
	return;
}

void			Contact::setNickname(std::string new_data) {
	this->_nickname = new_data;
	return;
}

void			Contact::setLogin(std::string new_data) {
	this->_login = new_data;
	return;
}

void			Contact::setPostalAddress(std::string new_data) {
	this->_postal_address = new_data;
	return;
}

void			Contact::setEmail(std::string new_data) {
	this->_email = new_data;
	return;
}

void			Contact::setPhoneNumber(std::string new_data) {
	this->_phone_number = new_data;
	return;
}

void			Contact::setBirthday(std::string new_data) {
	this->_birthday = new_data;
	return;
}

void			Contact::setFavMeal(std::string new_data) {
	this->_fav_meal = new_data;
	return;
}

void			Contact::setUndwColor(std::string new_data) {
	this->_undw_color = new_data;
	return;
}

void			Contact::setDarkestSecret(std::string new_data) {
	this->_darkest_secret = new_data;
	return;
}

void			Contact::add_contact(int nbr) {
	this->_nbr = nbr + 1;

	std::cout << "First Name: ";
	getline(std::cin, this->_first_name);
	
	std::cout << "Last Name: ";
	getline(std::cin, this->_last_name);
	
	std::cout << "Nickname: ";
	getline(std::cin, this->_nickname);
	
	std::cout << "Login: ";
	getline(std::cin, this->_login);
	
	std::cout << "Postal Address: ";
	getline(std::cin, this->_postal_address);
	
	std::cout << "Email: ";
	getline(std::cin, this->_email);
	
	std::cout << "Phone Number: ";
	getline(std::cin, this->_phone_number);
	
	std::cout << "Birthday Date: ";
	getline(std::cin, this->_birthday);
	
	std::cout << "Favorite Meal: ";
	getline(std::cin, this->_fav_meal);
	
	std::cout << "Underwear Color: ";
	getline(std::cin, this->_undw_color);
	
	std::cout << "Darkest Secret: ";
	getline(std::cin, this->_darkest_secret);
	return;
}

static void		print_info(std::string info) {
	if (info.length() > 10)
		std::cout << info.substr(0, 9) << "." << "|";
	else
		std::cout << std::setw(10) << info << "|";
	return;
}

static int		is_correct(std::string index, Contact contacts[CONTACT_NBR]) {
	int			digit;

	if (index.length() == 1 && isdigit(index[0])) {
		digit = index[0] - '0';
		if (digit > 0 && digit < 9)
			if (contacts[digit - 1].getNbr() > 0)
				return (digit);
		return (0);
	}
	else
		return (0);
}

void			Contact::search_contacts(Contact contacts[CONTACT_NBR]) {
	int			i;
	std::string	index;

	if (contacts[0]._nbr == 0) {
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	i = 0;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|   Index  |First Name|Last  Name| Nickname |" << std::endl;
	while (i < CONTACT_NBR && contacts[i]._nbr > 0) {
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "|         " << contacts[i]._nbr << "|";
		print_info(contacts[i]._first_name);
		print_info(contacts[i]._last_name);
		print_info(contacts[i]._nickname);
		std::cout << std::endl;
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Enter index: ";
	getline(std::cin, index);
	if ((i = is_correct(index, contacts))) {
		std::cout << "First Name: " << contacts[i - 1]._first_name << std::endl;
		std::cout << "Last Name: " << contacts[i - 1]._last_name << std::endl;
		std::cout << "Nickname: " << contacts[i - 1]._nickname << std::endl;
		std::cout << "Login: " << contacts[i - 1]._login << std::endl;
		std::cout << "Postal Address: " << contacts[i - 1]._postal_address << std::endl;
		std::cout << "Email: " << contacts[i - 1]._email << std::endl;
		std::cout << "Phone Number: " << contacts[i - 1]._phone_number << std::endl;
		std::cout << "Birthday Date: " << contacts[i - 1]._birthday << std::endl;
		std::cout << "Favorite Meal: " << contacts[i - 1]._fav_meal << std::endl;
		std::cout << "Underwear Color: " << contacts[i - 1]._undw_color << std::endl;
		std::cout << "Darkest Secret: " << contacts[i - 1]._darkest_secret << std::endl;
	}
	else {
		std::cout << "Index does not exist!" << std::endl;
		return;
	}
	return;
}
