#include <iostream>
#include <string>

    //    const std::string& getSecretCode() {
    //        std::string code = { "OMEGA-99" };                    // This function causes a dangling reference error because the local variable code is destroyed when the function scope ends.
    //        return code;
    //    }

std::string getSecretCode() {
    std::string code{ "OMEGA-99" };                                 // In this case we solved previos problem using return by value.
    return code;
}

int main() {

    std::cout << "Get secret code: " << getSecretCode() << '\n';
    return 0;
}