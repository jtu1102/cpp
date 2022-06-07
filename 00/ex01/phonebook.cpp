/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:19:16 by soahn             #+#    #+#             */
/*   Updated: 2022/06/07 02:19:37 by soahn            ###   ########.fr       */
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

	std::cout << "First Name : ";
	std::getline(std::cin, v);
	this->_contact[idx].setFirstName(v);

	std::cout << "Last Name : ";
	std::getline(std::cin, v);
	this->_contact[idx].setLastName(v);

	std::cout << "Nickname : ";
	std::getline(std::cin, v);
	this->_contact[idx].setNickname(v);
	
	std::cout << "Phone Number : ";
	std::getline(std::cin, v);
	this->_contact[idx].setPhoneNumber(v);
	
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, v);
	this->_contact[idx].setDarkestSecret(v);
}

void	PhoneBook::search() {
	int	idx; //string으로 받기!

	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << std::setw(10) << i << "|";
		(this->_contact[i].getFirstName().length() > 10) ? std::cout << std::setw(10) << this->_contact[i].getFirstName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contact[i].getFirstName() << "|";
		(this->_contact[i].getLastName().length() > 10) ? std::cout << std::setw(10) << this->_contact[i].getLastName().substr(0, 9) + "." << "|" : std::cout << std::setw(10) << _contact[i].getLastName() << "|";
		(this->_contact[i].getNickname().length() > 10) ? std::cout << std::setw(10) << this->_contact[i].getNickname().substr(0, 9) + "." << std::endl : std::cout << std::setw(10) << _contact[i].getNickname() << "|" << std::endl;
	}
	while (1) {
		std::cout << "index : ";
		std::cin >> idx;
		std::cout << idx << std::endl;
		if (int(idx) >= 0 and int(idx) < 8)
			break ;
		else
			std::cout << "index range : 0 ~ 7" << std::endl;
	}
	this->_contact[idx].printinfo();
}