#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), _weapon(nullptr) {}

HumanB::~HumanB() {}

void    HumanB::attack() {

    if (this->_weapon) {
        std::cout << this->name << " attacks with his " << this->_weapon->getType() << std::endl;
        return ;
    }

    std::cout << this->name << ": no weapon has set" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}