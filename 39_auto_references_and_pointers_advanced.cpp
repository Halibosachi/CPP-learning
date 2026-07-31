#include <iostream>
#include <string>

// Global game state variables (alive outside local scopes)
std::string active_quest{ "Slay the Dragon" };
const std::string ancient_prophecy { "Chosen one will end the cycle" }; 
int boss_health { 5000 };

// Returns a mutable reference to the active quest, allowing direct modification from outside.
std::string& getActiveQuest() { return active_quest; }

// Returns a const reference to protect the prophecy string from being accidentally modified.
const std::string& getProphecy() { return ancient_prophecy; }

// Returns a raw pointer to the boss health variable, allowing direct memory address manipulation.
int* getBossTarget() { return &boss_health; }

int main() {
    // Catching the returned reference using auto& and modifying the global state directly.
    auto& quest = getActiveQuest(); 
    quest = "Find the letter";
    std::cout << "Current quest: " << active_quest << "\n";

    // Catching with const auto& to prevent modification and avoid unnecessary string copying.
    const auto& prophecy = getProphecy();
    std::cout << "Prophecy: " << prophecy << "\n";

    // Catching the returned pointer using auto* and dereferencing it to read the target value.
    auto* target = getBossTarget();
    std::cout << "Boss Health: " << *target << "\n";

    
    return 0;
}