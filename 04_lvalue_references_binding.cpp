#include <iostream>

int main(){
    int x = 10;
    int y = 17;

    //int& ref1 = x;           //This works fine proper usage.

    //int& ref2;               //This doesn't work because references are just aliases, not independent objects. They must know who they alias the moment they are created.
    //ref2 = y;                //Since "int& ref2; " doesn't work we couldn't create ref2 that's why this line also doesn't work.

    //int& ref3 = 45;          //Doesn't work because cannot bind non-const lvalue reference of type 'int&' to an rvalue of type 'int'.

    //int& ref4 = (x + 5);     //We know that "x+5" is rvalue hence this is just like previous example.

    //const int& ref5 = 45;    //This works properly, const references can bind to rvalues.

    return 0;
}
