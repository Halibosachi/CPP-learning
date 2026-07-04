#include <iostream>

int main(){
    int height = 174;
    int min_Requirement = 175;

    int& ref = height;
    ref = min_Requirement;

    std::cout<<"Height: "<<height<<"cm \n";                             //This will give "Height: 175cm " as a result because ref alias for height. Changing ref also causes height to change.
    std::cout<<"Min_Requirement: "<<min_Requirement<<"cm \n";           //This will give "Min_Requirement: 175cm".


    return 0;
}