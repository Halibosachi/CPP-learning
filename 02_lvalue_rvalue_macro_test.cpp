#include <iostream>
#include <string>

//Lvalue reference
template <typename T>
constexpr bool is_lvalue(T&){
    return true;
}

//Rvalue reference
template <typename T>
constexpr bool is_lvalue(T&&){
    return false;
}

//for macro
#define PRINTVCAT(expr) {std::cout << #expr << " is an " << (is_lvalue(expr) ? "lvalue\n" : "rvalue\n");} 

int main(){
    int num = 58;
    //PRINTVCAT(num);                  // This gives "num is an lvalue" as a result.
    //PRINTVCAT(num+11);               // 'num+11' is rvalue program gives "num+11 is an rvalue" as a result.
    //PRINTVCAT(std::string("Şah"));   // This is rvalue because "Şah" here hasn't any constant memory it is just temporary string.
    //PRINTVCAT("Şah");                // Unlike previous example "Şah" here is an lvalue this is because string literals has memory addresses.
    //PRINTVCAT(num+=2);               // num+=2 lvalue here because operators like "+=", "-=", "*=" gives lvalue, updated version of num but still lvalue.
    return 0;
}
