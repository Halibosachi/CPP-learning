#include <iostream>

int& getHighestScore(int& x, int& y){                                       
    return (y > x) ? y : x ;     
}


int main() {
    int p1_score { 500 };
    int p2_score { 750 };

    std::cout<< "P1 score: " << p1_score << " P2 score: " << p2_score << "\n";                           // Outputing initial values.  

    getHighestScore(p1_score, p2_score) = 999 ;                                                          // Because of return by reference we are able to assign value to function. In this case "p2_score" changed to 999.

    std::cout<< "P1 score: " << p1_score << " P2 score: " << p2_score << "\n";                           // Proof of previous statement.  


    return 0;
}