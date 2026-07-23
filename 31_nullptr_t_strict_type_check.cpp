#include <iostream>
#include <cstddef>

void emergencyLockdown(std::nullptr_t){                                                  // This function only takes nullptr literal as a parameter.
    std::cout << "EMERGENCY LOCKDOWN ACTIVATED! System sealed successfully.\n";         
}

int main() {

    int* suspicious_signal {nullptr};

    //emergencyLockdown(suspicious_signal);                                             // This line causes an error because an int* pointer and the nullptr literal are different types.
    
    emergencyLockdown(nullptr);                                                         // This line works fine. 


    return 0;
}