#include <iostream>
#include <string>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string &stringREF = str;
}