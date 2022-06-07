/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:19:36 by soahn             #+#    #+#             */
/*   Updated: 2022/06/07 02:01:30 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class PhoneBook {
	private:
		Contact _contact[8];
		
	public:
		PhoneBook(); //생성자
		~PhoneBook(); //소멸자
		
		void	add(int idx);
		void	search();
};

#endif