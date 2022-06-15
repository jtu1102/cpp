#include "Weapon.hpp"

std::string& Weapon::getType() {
    return &(this->type);
}

void Weapon::setType(std::string arg) {
    this->type = arg;
}