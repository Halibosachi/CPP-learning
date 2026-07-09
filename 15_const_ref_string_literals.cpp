#include <iostream>
#include <string>

void printMesssage(const std::string& message){
    std::cout<<"Movie name: "<<message<<'\n';
}

int main(){
    std::string m_name = "Airplane!";
    printMesssage(m_name);

    printMesssage("Spirited Away");     //This would have given error message if we didn't use const pass by reference method.        



    return 0;
}