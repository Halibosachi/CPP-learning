#include <iostream>

int main() {
    int main_base_health{1000};
    int enemy_base_health{1000};

    int* const my_base_ptr { &main_base_health };
    *my_base_ptr -= 150;                                                    //We can change the value that is pointed by "my_base_ptr". Because it still holds the same address. We are only changing the value of "main_base_health" with this line.

    std::cout<<"Updated health of the base: "<<*my_base_ptr<<" \n";

    // my_base_ptr = &enemy_base_health;                                    //This line gives error because it tries to change to value of our const pointer "my_base_ptr". 

    return 0;
}