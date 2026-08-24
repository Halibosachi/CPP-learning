#include <iostream>

// Function returns a pointer to an int. 
// Using return by address is powerful because it allows us to return 'nullptr' to indicate failure.
int* getVipAccess(int* age_ptr) {                                                        
    // ALWAYS guard against null pointers before dereferencing! 
    // If we skip this and someone passes a null pointer, the program will crash (Undefined Behavior).
    if(!age_ptr){
        return nullptr;                                                    
    }

    // Dereference (*) age_ptr to check the actual integer value.
    // If they are 18 or older, return the memory address. Otherwise, return nothing (nullptr).
    return (*age_ptr >= 18) ? age_ptr : nullptr;
}

// Helper function to safely process the result.
void printAccessStatus(int* ptr) {                                                               
    // A pointer evaluates to 'true' if it holds a valid address, and 'false' if it is a nullptr.
    if(ptr){
        // We can safely dereference (*) here because the 'if' statement proved it is not null.
        std::cout << "Vip access granted. Age: " << *ptr << ".\n";
    } else {
        std::cout << "Vip access denied.\n"; 
    }
}

int main() {
    int user_age { 21 };
    int child_age { 14 };

    // We pass the memory address (&) of user_age into the function.
    // Direct initialization immediately stores the returned address (or nullptr) into user_ptr.
    int* user_ptr { getVipAccess(&user_age) };
    printAccessStatus(user_ptr);

    // Testing the fail condition. Because 14 < 18, child_ptr will receive 'nullptr'.
    int* child_ptr { getVipAccess(&child_age) };
    printAccessStatus(child_ptr);
    
    return 0;
}