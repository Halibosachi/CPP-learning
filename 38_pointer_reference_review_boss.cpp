#include <iostream>

int getSacredSwordDamage() {
    int base_damage { 45 };
    return base_damage; 
}

void takeDamage(int* hp_ptr, int damage) {
    if(hp_ptr){
        *hp_ptr -= damage;
    }
    
}

void healBoss(int& hp_ref, int heal_amount) {
    hp_ref += heal_amount;
    
}

int main() {
    int boss_hp { 100 };
    std::cout << "Starting health of the boss: " << boss_hp << '\n';

    int sword_dmg = getSacredSwordDamage();

    takeDamage(&boss_hp, sword_dmg);
    
    std::cout << "Boss's health after hit: " << boss_hp << '\n';

    healBoss(boss_hp, 30);    

    std::cout << "Boss's health after heal: " << boss_hp << '\n';

    return 0;
}