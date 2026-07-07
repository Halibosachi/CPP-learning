#include <iostream>

int main(){
    int num = 12;
    std::cout<<"Address of num = "<<&num<<std::endl;

    //std::cout<<&(num+5)<<'\n';        //We are getting error message because "num+5" is a rvalue and doesn't have an address.
    //std::cout<<&("Hello")<<'\n';      //This works properly string literals have memory addresses.
    //std::cout<<&(++num)<<'\n';        //This is also fine with pre-increment we still have the lvalue.
    //std::cout<<&(num++)<<'\n';        //Unlike previos example post-incement operator gives copy memoryless rvalue.
    //std::cout<<&(num*=2)<<'\n';       //This works fine operators like "+=", "-=", "*=" gives lvalue, updated version of num but still lvalue.
    return 0;
}
