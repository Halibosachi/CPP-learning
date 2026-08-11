#include <iostream>

void applyBuff(int* stats_ptr){
    if(!stats_ptr){                                                                 // Null pointer check.
        std::cout << "No target selected. Buff wasted." << '\n';
    } else {
        *stats_ptr += 25;                                                           // With dereference changing the value of "warrior_strength".
        std::cout << "Buff applied! New stats: " << *stats_ptr << '\n';
    }
}

int main() {
    
    int warrior_strength{ 100 };
    int* invalid_ptr{};

    applyBuff(&warrior_strength);                                                   // Inside the function we changed the value of "warrior_strength".

    std::cout << "New value of warrior_strength: " << warrior_strength << '\n';     // Showing the new value of "warrior_strength".

    applyBuff(invalid_ptr);                                                         // This line is safe! It won't crash because we handled the nullptr case inside the function. 

    return 0;
}