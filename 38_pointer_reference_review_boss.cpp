#include <iostream>

// Returns the base damage of the sacred sword by value.
int getSacredSwordDamage() {
    int base_damage { 45 };
    return base_damage; 
}

// Takes a pointer to the health variable and safely applies damage if the pointer is valid.
void takeDamage(int* hp_ptr, int damage) {
    if(hp_ptr){
        *hp_ptr -= damage;
    }
    
}

// Takes a reference to the health variable and directly increases the boss's health.
void healBoss(int& hp_ref, int heal_amount) {
    hp_ref += heal_amount;
    
}

int main() {
    int boss_hp { 100 };
    std::cout << "Starting health of the boss: " << boss_hp << '\n';

    // Get the damage value from the function.
    int sword_dmg = getSacredSwordDamage();

    // Pass the memory address of boss_hp to the pointer function.
    takeDamage(&boss_hp, sword_dmg);
    
    std::cout << "Boss's health after hit: " << boss_hp << '\n';

    // Pass boss_hp by reference to heal it.
    healBoss(boss_hp, 30);    

    std::cout << "Boss's health after heal: " << boss_hp << '\n';

    return 0;
}