#include <iostream>

int main() {
    
    int* score_ptr{nullptr};                                                            //Creating null pointer to avoid wild pointer.


    if(score_ptr != nullptr){
        std::cout << "Player score: " << *score_ptr << '\n';                            //Checking for memory address. In this case pointer is null so we won't be seeing output of his line.
    } else {
        std::cout << "Warning: Score pointer is null. Cannot read address."<<'\n';      //Warning message for null pointer.
    }
    

    return 0;
}