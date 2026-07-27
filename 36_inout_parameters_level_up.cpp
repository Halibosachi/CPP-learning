#include <iostream>

// Checks and updates hero's level and xp (In-Out parameters)
void checkLevelUp(int& level, int& xp){                                 
    if(xp >= 100){
        level++;
        xp -= 100;
        std::cout<< "Level up! New level: " << level << '\n';
    }
}

int main() {
    int hero_lvl{ 5 };
    int hero_xp{ 120 };

    std::cout << "Before checking - Lvl: " << hero_lvl << " | XP: " << hero_xp << '\n';

    checkLevelUp(hero_lvl, hero_xp);

    std::cout << "After checking  - Lvl: " << hero_lvl << " | XP: " << hero_xp << '\n';
    
    return 0;
}