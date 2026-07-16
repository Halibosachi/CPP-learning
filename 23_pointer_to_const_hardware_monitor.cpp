#include <iostream>

int main() {
    int cpu_temp { 75 };                                        //Initializing integers.
    int gpu_temp { 82 };

    const int* temp_monitor_ptr = &cpu_temp;                    //Creaing const int pointer to point "cpu_temp". 

    std::cout<<"Cpu temp: "<< *temp_monitor_ptr << "C\n";       //Outputing the "cpu_temp" with pointer.

    temp_monitor_ptr = &gpu_temp;                               //Chaning pointer to point different address, in this case address of "gpu_temp".

    //*temp_monitor_ptr = 90;                                     //Because we made "temp_monitor_ptr" to hold const int value we can't change the value of "gpu_temp" with dereference.
    

    return 0;
}