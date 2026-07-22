#include <iostream>
#include <cstddef> // Required for std::nullptr_t

void issueOrder(int* infantry_count) {
    if (infantry_count) {
        std::cout << "Infantry charging! Count: " << *infantry_count << '\n';
    }
}

void issueOrder(double* archer_damage) {
    if (archer_damage) {
        std::cout << "Archers firing! Damage: " << *archer_damage << '\n';
    }
}

void issueOrder(std::nullptr_t) {                                                        //Resolves ambiguous function call when a literal 'nullptr' is passed
        std::cout << "Commander, no unit was selected!" << '\n';
    
}

int main() {
    int foot_soldiers { 500 };
    double bow_damage { 45.5 };

    issueOrder(&foot_soldiers);
    issueOrder(&bow_damage);

    std::cout << "-------------------\n";

    
    issueOrder(nullptr); 

    return 0;
}