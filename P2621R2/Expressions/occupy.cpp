//
// Created by admin on 13/03/24.
//

#include "occupy.h"
#ifdef __extension__
#elif defined(__extension__) || defined(__extension__)
struct B {
    B();
    ~B();
};

const B b;

void h() {
    b.~B();
    new (const_cast<B*>(&b)) const B;     // undefined behavior
}
#endif //__extension__