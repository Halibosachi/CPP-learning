#include <iostream>

int main() {
   int player_goal = 10;
   const int& goal_tracer = player_goal;

   //goal_tracer = 11;             //This causes error because we promised to only read goal_tracer.

   //player_goal = 11;              //By changing "player_goal" we also changed goal_tracer.
   //std::cout<<goal_tracer<<'\n';  //This code proves previous statement.

    
    return 0;
}