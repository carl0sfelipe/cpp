#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    Weapon club("crude spiked club");
    
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();

    Weapon sword("sharp sword");

    HumanB jim("Jim");
    jim.attack();
    jim.setWeapon(sword);
    jim.attack();
    sword.setType("some other type of sword");
    jim.attack();

    return 0;
}
