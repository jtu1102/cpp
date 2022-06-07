/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soahn <soahn@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 03:19:22 by soahn             #+#    #+#             */
/*   Updated: 2022/06/07 01:54:09 by soahn            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void) {
	PhoneBook	phonebook;
	std::string	in;
	int			i;

	i = 0;
	while (1) {
		std::cout << "> ";
		std::getline(std::cin, in); //getline으로 표준 입력을 받아서 in에 저장
		if (in == "EXIT")
			return (0);
		else if (in == "ADD") {
			phonebook.add(i++);
			i %= 8;
		}
		else if (in == "SEARCH")
			phonebook.search();
	}
}