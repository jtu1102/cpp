#include "Zombie.hpp"

int main(void){
	Zombie *zombie = newZombie("Ben");
	
	zombie->announce();
	
	randomChump("Jerry");
	delete zombie;

	return (0);
}