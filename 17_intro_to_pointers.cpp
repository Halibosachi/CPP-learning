#include <iostream>

int main(){
    int cheetah_speed{120};                     // "km/h"

    int* speed_ptr = &cheetah_speed;            //Created pointer and assigned address of "cheetah_speed" as value.

    std::cout<<cheetah_speed<<'\n';             //This will give 120. Value of "cheetah_speed".
    std::cout<<&cheetah_speed<<'\n';            //This will give address of "cheetah_speed".
    std::cout<<speed_ptr<<'\n';                 //Same as previous example this will give address of "cheetah_speed".
    std::cout<<*speed_ptr<<'\n';                //This will give 120 value of "cheetah_speed", because we used dereference operator. Dereference operator accesses the actual value stored at the memory address held by a pointer.

    *speed_ptr = 75;                            //With dereference operator we can change the value of "cheetah_speed" to 75.
    std::cout<<cheetah_speed<<'\n';             //We can see value of "cheetah_speed" changed.               

    return 0;
}