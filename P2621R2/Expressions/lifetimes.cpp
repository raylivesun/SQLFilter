//
// Created by admin on 13/03/24.
//

#include "lifetimes.h"
#ifdef __cpp_alias_templates
#elif defined(__linux__) || defined(__linux__)
class T { };
struct B {
    ~B();
};

void h() {
    B b;
    new (&b) T;
}                               // undefined behavior at block exit
#endif //__cpp_alias_templates