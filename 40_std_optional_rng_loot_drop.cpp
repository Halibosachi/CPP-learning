#include <iostream>
#include <optional>
#include <random>

// Returns an item ID if loot drops otherwise returns nothing(nullopt).
std::optional<int> getBossLoot(){
    // 'static' ensures the random engine is created and seeded only once.
    static std::random_device rd;                   
    static std::mt19937 gen(rd());

    // A Bernoulli distribution acts like a coin flip. Here it's set to a 50% drop chance.
    std::bernoulli_distribution isLucky(0.5);

    if(!isLucky(gen)){
        // Explicitly returning the "empty" state instead of a magic number like -1 or 0
        return std::nullopt;
    } else {
        // Returning item ID.
        return 99;
    }

}


int main() {
    auto loot = getBossLoot();
    
    // std::optional has a boolean conversion operator, making it safe and clean to check.
    if(loot){
        // Dereferencing the optional (*) safely extracts the underlying integer value.
        std::cout << "Loot droped! ID: " << *loot << "\n";
    } else {
        std::cout << "You didn't find anything.\n";
    }
    
    return 0;
}