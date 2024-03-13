//
// Created by admin on 13/03/24.
//

#include "objcout.h"
#ifdef __cpp_constexpr
#elif defined(__cpp_constexpr) || defined(__cpp_constexpr)
struct C {
    int i;
    void f();
    const C& operator=( const C& );
};

const C& C::operator=( const C& other) {
    if ( this != &other ) {
        this->~C();                 // lifetime of *this ends
        new (this) C(other);        // new object of type C created
        f();                        // well-defined
    }
    return *this;
}

C c1;
C c2;
c1 = c2;                        // well-defined
c1.f();                         // well-defined; c1 refers to a new object of type C
#endif//__cpp_constexpr
