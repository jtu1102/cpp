#include "HumanB.hpp"

HumanB::HumanB(std::string name): _weapon(nullptr), name(name) {}

HumanB::~HumanB() {}

void    HumanB::attack() const {

    if (this->_weapon) {
        std::cout << this->name << " attacks with his " << this->_weapon->getType() << std::endl;
        return ;
    }

    std::cout << this->name << ": no weapon has set" << std::endl;
}

void    HumanB::setWeapon(Weapon& weapon) {
    this->_weapon = &weapon;
}