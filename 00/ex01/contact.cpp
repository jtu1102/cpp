/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 04:04:15 by soahn             #+#    #+#             */
/*   Updated: 2022/06/06 05:56:08 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void		Contact::setFirstName(std::string arg) {this->_firstname = arg;}
void		Contact::setLastName(std::string arg) {this->_lastname = arg;}
void		Contact::setNickname(std::string arg) {this->_nickname = arg;}
void		Contact::setPhoneNumber(std::string arg) {this->_phonenumber = arg;}
void		Contact::setDarkestSecret(std::string arg) {this->_darkestsecret = arg;}

std::string Contact::getFirstName() {return (this->_firstname);}
std::string Contact::getLastName() {return (this->_lastname);}
std::string Contact::getNickname() {return (this->_nickname);}
std::string Contact::getPhoneNumber() {return (this->_phonenumber);}
std::string Contact::getDarkestSecret() {return (this->_darkestsecret);}

void		Contact::printinfo() {
	std::cout << "First Name : " << this->_firstname << std::endl;
	std::cout << "Last Name : " << this->_lastname << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone Number : " << this->_phonenumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestsecret << std::endl;
}
