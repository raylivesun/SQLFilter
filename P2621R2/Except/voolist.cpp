//
// Created by admin on 13/03/24.
//

#include "voolist.h"
#ifdef __volatile__
#elif defined(__volatile__) || defined(__volatile__)
struct A {
    int a;
    int&& r;
};

int f();
int n = 10;

A a1{1, f()};                   // OK, lifetime is extended
A a2(1, f());                   // well-formed, but dangling reference
A a3{1.0, 1};                   // error: narrowing conversion
A a4(1.0, 1);                   // well-formed, but dangling reference
A a5(1.0, std::move(n));        // OK
#endif//__volatile__
