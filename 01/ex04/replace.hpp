#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace {
	private:

	public:
		Replace();
		~Replace();

		static void replace(std::string const &filename, char *s1, char *s2);
};

#endif