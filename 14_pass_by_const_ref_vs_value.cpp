#include <iostream>
#include <string>

void printfGameInfo(const std::string& game_name, int release_date, double price, const std::string& developer){            //Passing strings by const reference is more efficient since they are expensive to copy. Fundamental types like int and double are cheap to copy, so we pass them by value.
    std::cout<<game_name<<" released in "<<release_date<<" with price of "<<price<<" it's developer was "<<developer<<'\n';
}

int main(){
    const std::string game_name = "Baldur's Gate 3";
    const std::string developer = "Larian";
    
    printfGameInfo(game_name, 2023, 59.99, developer);

    return 0;
}