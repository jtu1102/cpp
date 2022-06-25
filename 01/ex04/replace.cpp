#include "replace.hpp"

Replace::Replace() {}

Replace::~Replace() {}

void	Replace::replace(std::string const &filename, char *s1, char *s2) {
	std::ifstream 	in;
	std::ofstream 	out;
	std::string		line;

	//in, out filestream open
	in.open(filename);
	if (!in) {
		std::cout << "Cannot open the input file" << std::endl;
		return ;
	}
	out.open(filename + ".replace", std::ios::trunc); //파일 스트림을 열면 기존에 있던 내용들이 모두 지워짐
	if (!out) {
		in.close();
		std::cout << "Cannot open the output file" << std::endl;
		return ;
	}
	//한 줄씩 읽어 오면서 s1 찾아 바꾸기
	while (std::getline(in, line)) {
		size_t s1_len = strlen(s1);
		size_t pos = line.find(s1);

		while (pos != std::string::npos) {
			line.erase(pos, s1_len);
			line.insert(pos, s2);
			
			pos += strlen(s2);
			pos = line.find(s1, pos, s1_len);
		}
		out << line;
		if (!in.eof())
			out << '\n';
	}
	in.close();
	out.close();
}