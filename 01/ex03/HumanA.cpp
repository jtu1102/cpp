#include "HumanA.hpp"

HumanA() {
    
}

void    HumanA::attack() {
    std::cout << this->name << "attacks with their " << this->_weapon.getType() << std::endl;
}