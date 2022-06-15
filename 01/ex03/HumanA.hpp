#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {
    private:
        Weapon _weapon;
        std::string name;
    public:
        HumanA();
        ~HumanA();
        void    attack();
};

#endif