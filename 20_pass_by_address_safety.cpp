#include <iostream>

void doubleValue(int* num){
    if(num){    
        *num = (*num) * 2;
    }
    else{
        std::cout<<"Null Pointer!"<<'\n';
    }
}


int main() {
    int energy{50};

    std::cout<<"Initial energy: "<<energy<<'\n';

    doubleValue(&energy);

    std::cout<<"Updated energy: "<<energy<< '\n';

    std::cout << "Testing nullptr safety...\n";
    doubleValue(nullptr); 
    std::cout << "No crash! Safety check works perfectly.\n";

    return 0;
}