#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): _weapon(weapon), name(name) {}

HumanA::~HumanA() {}

void    HumanA::attack() const {
    std::cout << this->name << " attacks with his " << this->_weapon.getType() << std::endl;
}