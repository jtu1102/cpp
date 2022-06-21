#include "replace.hpp"

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "usage: ./replace infile s1 s2" << std::endl;
		return (1);
	}

	Replace::replace(argv[1], argv[2], argv[3]);

	return (0);
}