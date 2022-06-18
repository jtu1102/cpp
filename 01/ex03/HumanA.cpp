#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), _weapon(weapon) {}

HumanA::~HumanA() {}

void    HumanA::attack() {
    std::cout << this->name << " attacks with his " << this->_weapon.getType() << std::endl;
}