#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << this->name << " destructed" << std::endl;
}

void	Zombie::setName(std::string arg) {
	this->name = arg;
}

void	Zombie::announce() {
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}