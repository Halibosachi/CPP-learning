#include <iostream>

void updateWeight(double w){
    w -= 1.5;
}

int main(){
    double currentWeight = 80;
    
    std::cout<<"Weight before update: "<<currentWeight<<'\n';               //Output: "Weight before update: 80" 

    updateWeight(currentWeight);                                            //Sending "currentWeight" as pass by value.

    std::cout<<"Weight after update: "<<currentWeight<<'\n';                //Output: "Weight before update: 80". Same output because with pass by value method we send copy of our variable and calculation inside function only affected that copy.

    return 0;
}