#include <iostream>

struct MinMax {
    int min;
    int max;
};


MinMax getMinMax(int a, int b) {   // Returns a MinMax struct containing the smaller and larger value.
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