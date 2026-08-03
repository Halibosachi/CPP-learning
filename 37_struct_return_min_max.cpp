#include <iostream>

// Struct to encapsulate and return multiple values (minimum and maximum) from a function.
struct MinMax {
    int min;
    int max;
};

// Compares two integers and returns a MinMax struct containing the smaller and larger value.
MinMax getMinMax(int a, int b) {
   if(a > b){
    return {b , a};
   } else {
    return {a, b};
   }                       
}

int main() {
    int damage_1 { 45 };
    int damage_2 { 12 };

    std::cout << "Damages: " << damage_1 << " and " << damage_2 << '\n';

    MinMax result = getMinMax(damage_1, damage_2);

    std::cout << "Minimum Damage: " << result.min << '\n'; 
    std::cout << "Maximum Damage: " << result.max << '\n'; 

    return 0;
}