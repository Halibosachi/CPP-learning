#include <iostream>

void changeTarget(int*& target_ptr, int* new_target_address){                               // Changing pointer's value with pointer by reference.
    target_ptr = new_target_address;                                                        // Redirecting the original pointer to point to the new enemy's memory address.
    std::cout << "Target locked to a new enemy!\n";
}

int main() {
    int enemy1_hp { 100 };
    int enemy2_hp { 200 };

    int* current_target_ptr { &enemy1_hp };
    std::cout << "Shooting at enemy with HP: " << *current_target_ptr << '\n';

    changeTarget(current_target_ptr, &enemy2_hp);

    std::cout << "Shooting at enemy with HP: " << *current_target_ptr << '\n';
    
    return 0;
}