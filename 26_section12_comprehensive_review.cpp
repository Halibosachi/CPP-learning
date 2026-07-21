#include <iostream>
#include <string>


void printHeroInfo(const std::string& hero_name, int level) {
    std::cout << "Hero: " << hero_name << " | Level: " << level << '\n';
}


void takeDamage(int& hp, int damage) {
    hp -= damage;
    std::cout << damage << " Damage taken!\n";
}

void takeDamage(int* hp, int damage) {
    *hp -= damage;
    std::cout << damage << " Damage taken!\n";
}

void usePotion(int* health_ptr, int heal_amount) {
    if(health_ptr){
        *health_ptr +=heal_amount;
    } else {
        std::cout<<"There is no target for the potion to be used on."<<'\n';
    }
}

int main() {
   
    std::string name { "Arthur" };
    int hero_health { 100 };
    int enemy_health { 50 };

    std::cout << "--- GAME STARTS ---\n";
    
    
    printHeroInfo(name, 10);

    takeDamage(hero_health, 20); 
    std::cout << "Current health: " << hero_health << '\n';

    int* arthur_hp_ptr { &hero_health };
    usePotion(arthur_hp_ptr, 30);
    std::cout << "Health after potion: " << hero_health << '\n';
    
    usePotion(nullptr, 50);

    std::cout << "\n--- POINTER AND CONST TESTS ---\n";

    
    int* const enemy_health_ptr = &enemy_health; 
    takeDamage(enemy_health_ptr, 15);

    
    std::cout << "Enemy current health: " << enemy_health << '\n';

    int sacred_sword_damage { 9999 };
    
    const int* const sacred_sword_damage_ptr = &sacred_sword_damage;

    //*sacred_sword_damage_ptr -= 5;  //This line gives error because with dereference operator we are trying to change value that we said const.
    
    //sacred_sword_damage_ptr = &enemy_health;    //This line also gives error because "crystal_ptr" const pointer we can't change it's value.

    

    return 0;
}
