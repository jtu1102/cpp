/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:19:16 by soahn             #+#    #+#             */
/*   Updated: 2022/06/06 07:24:29 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "MY PHONEBOOK" << std::endl;
	std::cout << "ADD - add a new contact" << std::endl;
	std::cout << "SEARCH - show my PhoneBook" << std::endl;
	std::cout << "EXIT - exit program" << std::endl;
}

PhoneBook::~PhoneBook() {}

void	PhoneBook::add(int idx) {
	std::string	v;

	std::cout << "First Name : "
	std::getline(std::cin, v);
	this->_contact[i]->setFirstName(v);
	std::cout << "Last Name : "
	std::getline(std::cin, v);
	this->_contact[i]->setLastName(v);std::cout << "Nickname : "
	std::cout << "Phone Number : "
	std::getline(std::cin, v);
	this->_contact[i]->setPhoneNumber(v);
	std::cout << "Darkest Secret : "
	std::getline(std::cin, v);
	this->_contact[i]->setDarkestSecret(v);
}

void	PhoneBook::search() {
	std::string	idx;

	std::cout << setw(10) << "index |"
	std::cout << setw(10) << "First Name |"
	std::cout << setw(10) << "Last Name |"
	std::cout << setw(10) << "Nickname |"
	for (int i = 0; i < 8; i++) {
		std::cout << setw(10) << i << "|";
		(this->_contact[i].getFirstName().length() > 10) ? std::cout << std::setw(10) << this->_contact[i].getFirstName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contacts[i].getFirstName() << "|";
		(this->_contact[i].getLastName().length() > 10) ? std::cout << std::setw(10) << this->_contact[i].getLastName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contacts[i].getLastName() << "|";
		(this->_contact[i].getNickname().length() > 10) ? std::cout << std::setw(10) << this->_contact[i].getNickname().substr(0, 9) + "." << std::endl : std::cout << std::setw(10) << _contacts[i].getNickname() << std::endl;
	}
	while (1) {
		std::cout << "index : ";
		std::cin >> idx;
		
	}
}