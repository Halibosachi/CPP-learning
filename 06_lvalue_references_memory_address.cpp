#include <iostream>

int main() {
    int x = 1900;
    int& x_ref = x;

    std::cout << "address of x: " << &x << '\n';  
    std::cout << "address of x_ref: " << &x_ref << '\n';  //They both have same address because reference is just a alias

    x_ref = 1850;
    std::cout << "value of x: " << x << '\n';            //This code proves changing reference also changes referent.


    
    
    return 0;
}