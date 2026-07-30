#include <iostream>
#include <string>

std::string active_quest{ "Slay the Dragon" };
const std::string ancient_prophecy { "Chosen one will end the cycle" }; 
int boss_health { 5000 };

std::string& getActiveQuest() { return active_quest; }
const std::string& getProphecy() { return ancient_prophecy; }
int* getBossTarget() { return &boss_health; }

int main() {
    auto& quest = getActiveQuest(); 
    quest = "Find the letter";
    std::cout << "Current quest: " << active_quest << "\n";

    const auto& prophecy = getProphecy();
    std::cout << "Prophecy: " << prophecy << "\n";

    auto* target = getBossTarget();
    std::cout << "Boss Health: " << *target << "\n";

    
    return 0;
}