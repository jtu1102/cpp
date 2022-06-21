#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {
    private:
        Weapon 		*_weapon;
        std::string name;
    public:
        HumanB(std::string name);
        ~HumanB();
        void    attack() const;
		void	setWeapon(Weapon& weapon);
};

#endif