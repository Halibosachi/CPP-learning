/*
 * Topic: A general review of what I have done so far
 * Description: This file demonstrates the combined usage of l-value references, 
 * const references (for safe, zero-copy parameter passing), macros, and templates.
 * * Note for future: While the macro (PRINT) is used here for experimental logging, 
 * modern C++ strictly prefers templates (like printSafe) for better type safety 
 * and debugging.
 */


#include <iostream>
#include <string>

#define PRINT(x, y) std::cout<<(y)<<" scores! His "<<(x)<<" goal in this tournament."<<'\n';

void print_and_update_score(int& player_goal_count, const std::string& player_name){
    player_goal_count++;
    std::cout<<player_name<<" scored his "<<player_goal_count<<" goal!"<<'\n';
}

template <typename T, typename U>
void printSafe(const T& a, const U& b){
    PRINT(a, b);
}


int main(){
    int player_goal_count = 100;
    std::string player_name = "Ryerson";
    print_and_update_score(player_goal_count, player_name);

    const int player_tournament_goal_count{5};
    const std::string player_nickname{"Perfecto"};

    printSafe(player_tournament_goal_count, player_nickname);


    return 0;
}