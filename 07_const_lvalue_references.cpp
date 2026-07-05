#include <iostream>

int main()
{
    int num = 34;
    const int c_num = 56;

    const int& ref1 = num;           //This works fine. This would have worked fine even without the `const` before `int`.

    const int& ref2 = c_num;         //This works fine this way.  if "int& ref2 = c_num" this was the case it would have given error because reference without const beforehand needs modifiable l-value as referent.

    const int& ref3 = 100;           //Works fine. We can use r-values as referent if we use 'const' beforehand because a const lvalue reference can bind to an r-value because it prevents accidental modifications to temporary objects while automatically extending their lifetime to avoid dangling references.

    const int& ref4 = (num + 21);    //We know that "(num + 21)" is an r-value hence this example just like previous one and works fine.


    return 0;
}