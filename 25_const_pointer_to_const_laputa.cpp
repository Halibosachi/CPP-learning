#include <iostream>

int main() {
    int lapute_crystal_power{1000};
    int fake_crystal_power{10};


    const int* const crystal_ptr {&lapute_crystal_power} ;          //Creating a const pointer to const int.

    //*crystal_ptr -= 100;                                          //This line gives error because with dereference operator we are trying to change value that we said const.
    
    //crystal_ptr = &fake_crystal_power;                            //This line also gives error because "crystal_ptr" const pointer we can't change it's value.

    std::cout<<"Crystal Power: "<<*crystal_ptr<<" \n";              //This line works properly because we only read here.

    
    return 0;
}