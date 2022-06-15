#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
    private:
        Weapon _weapon;
        std::string name;
    public:
        HumanB();
        ~HumanB();
        void    attack();
};

#endif