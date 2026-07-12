#include <iostream>

int main() {
    int current_price{120};
    int target_price{100};

    int* current_ptr = &current_price;                      //Creating pointer that holds memory of "current_price" as value.
    *current_ptr = 110;                                     //With dereference operator we can access and change the value whose address held by "current_ptr".
    
    
    current_ptr = &target_price;                            //Changing pointer's value to address of "target_price". Unlike references, pointers can be reassigned to different objects after initialization
    *current_ptr = 90;                                      //With dereference operator changing the value of "target_price".

    //We can see changed values
    std::cout<<"Current price: "<<current_price<<" \n";     //"Current price: 110 "
    std::cout<<"Target price: "<<target_price<<" \n";       //"Target price: 90 "


    return 0;
}