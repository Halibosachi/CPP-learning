#include <iostream>

int* getVipAccess(int* age_ptr){                                                                 //Using return by address allows us to return nullptr.
    if(!age_ptr){
        return nullptr;                                                    
    }

    return (*age_ptr >= 18) ? age_ptr : nullptr;
}

void printAccessStatus(int* ptr){                                                                //Helper function.
    if(ptr){
        std::cout << "Vip access granted. Age: " << *ptr << ".\n";
    } else {
        std::cout << "Vip access denied.\n"; 
    }
}

int main() {
    int user_age { 21 };
    int child_age { 14 };

    int* user_ptr { getVipAccess(&user_age) };
    printAccessStatus(user_ptr);


    int* child_ptr { getVipAccess(&child_age) };
    printAccessStatus(child_ptr);

    
    
    return 0;
}