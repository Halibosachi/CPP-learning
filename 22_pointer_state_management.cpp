#include <iostream>

int main() {
    
    int* hero_health_ptr{};                                         //Initialazing null pointer.

    if(!hero_health_ptr){
        std::cout<<"Hero is not spawned yet.\n";                    //Pointer is null so we will see this line.
    }

    int spawned_health{100};                                        //Initialazing integer "spawned_health" with value 100;
    hero_health_ptr = &spawned_health;                              //Giving address of "spawned_health" to "hero_health_ptr".

    if(hero_health_ptr){
        std::cout<<"Hero's health: "<< *hero_health_ptr <<" \n";    //This time pointer is not null. With dereference operator we will see value that is pointed by "hero_health_ptr".
    }


    return 0;
}