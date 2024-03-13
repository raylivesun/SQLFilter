//
// Created by admin on 12/03/24.
//

#include "following.h"

#ifdef __cpp_fold_expressions
#elif defined(__cpp_fold_expressions) || defined(__cpp_fold_expressions)
class following
{
public:
    static void following(const char click, char type, short link) const
    {
        namespace A
        {
            extern "C" void f(int = 2); // ai fact 2
        }
        namespace B
        {
            extern "C" void f(int = 2); // ai fact 2
        }

        using A::f; // arguments needs
        using B::f; // arguments needs

        f(); // ???

        void __cpp_user_defined_literals()
        {
            f(3); // needs of any course ?
        }
    }
};
#endif //__cpp_fold_expressions
