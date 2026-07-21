#include <iostream>
#include <string>

void weightControl(const double& weight){
    //weight = 85.2;                            //const forbids us to change value of weight.
}

int main(){
    double current_weight = 80.0;

    weightControl(current_weight);

    return 0;
}
