#include <iostream>

int getRval(){
    return 5;
}

int main(){
    int number1 = 12;
    int number2 = 42;

    // 1. Situation
    // 29 = number1;                //Lvalue on the right. Lvalue required as left operand of assigment.


    // 2. Situation
    // number1 = number2;           //This is fine because of conversion property of lvalue, number2 is a lvalue but in this case acts like rvalue.


    // 3. Situation
    // number1 = number2 + 11;      //This is also fine again conversion property of lvalue.


    // 4. Situation
    //number2 + 11 = number1;       //number2 again acts like rvalue and this makes left side rvalue this is just like first situation.



    // 5. Situation
    //getRval() = 23;               //getRval() returns an rvalue. This code tries to assign 23 to a temporary, memoryless getRval().


    // 6. Situation
    //++number1 = number2;          //This is fine '++number1' is Lvalue number2 again acts like rvalue. 



    // 7. Situation
    //number1++ = number2;         //Unlike previous example 'number1++' is rvalue that's why we have problem here.

    return 0;
}