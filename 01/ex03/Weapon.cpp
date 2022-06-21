#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {} // 생성자

Weapon::~Weapon() {}

const    std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string& arg) {
    this->type = arg;
}