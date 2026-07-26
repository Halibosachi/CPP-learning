#include <iostream>

// Calculates quotient and remainder, returning them via output parameters.
void divideStats(int total_points, int divisor, int& out_quotient, int& out_remainder) {
    out_quotient = total_points / divisor;
    out_remainder = total_points % divisor;
}

int main() {
    int q{};    // Empty variable for quotient. 
    int r{};    // Empty variable for remainder. 

    divideStats(10, 3, q, r);

    std::cout << "10 / 3 -> quotient: " << q << " | remainder: " << r << '\n';


    return 0;
}