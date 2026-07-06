#include <iostream>
//Changing values with pass by reference

void swapValues(int& n1, int& n2){
    int temp{};
    temp = n1;
    n1 = n2;
    n2 = temp;
}


int main() {
    int num1 = 800;
    int num2 = 1700;

    std::cout << "num1 value before swap: " << num1 << " num2 value before swap: " << num2 << '\n';

    swapValues(num1, num2);
    
    std::cout << "num1 value after swap: " << num1 << " num2 value after swap: " << num2 << '\n';
    
    return 0;
}