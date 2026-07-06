#include <iostream>
#include <string>

void updateGpuModel(std::string &model){
    model = "9070 xt";

}


int main() {
    std::string gpu = "RTX 5070";

    updateGpuModel(gpu);

    std::cout<<"Gpu: "<<gpu<<'\n';  //Using references as function parameter we changed the value of "gpu". 
    return 0;
}