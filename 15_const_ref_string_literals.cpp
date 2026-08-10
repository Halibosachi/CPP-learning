#include <iostream>
#include <string>

void printMesssage(const std::string& message){
    std::cout<<"Movie name: "<<message<<'\n';
}

int main(){
    std::string m_name = "Airplane!";
    printMesssage(m_name);

    // Note: "Spirited Away" is a string literal (lvalue const char[]).
    // But function expects std::string thats why it creates a copy of "Spirited Away" as a rvalue.
    // If we didn't use 'const' on the function we would get an error because temporary rvalues can't bind to non-const references.
    printMesssage("Spirited Away");        



    return 0;
}