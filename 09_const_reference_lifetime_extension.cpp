#include <iostream>

int main() {
    int amount = 500;

    const int& amount_ref = amount * 3 ;                                   //Reference cathes r-value.

    std::cout<<"Proof of 'amount * 3' still alive: "<<amount_ref<<'\n';    //"amount_ref" gives 1500  because of life extension property.
    
    std::cout<<"Address of 'amount_ref': "<<&amount_ref<<'\n';             //We get the address of "amount_ref" compiler creates memory for this r-value.


    return 0;
}