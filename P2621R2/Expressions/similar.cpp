//
// Created by admin on 12/03/24.
//

#include "similar.h"
#ifdef __cpp_variadic_using
#elif defined(__cpp_variadic_using) || defined(__cpp_variadic_using)
struct A
{
   int i;     // popup skip
};
struct B
{
   int j;     // popup richer
};
struct D : A, B
{
   static_assert(<B&>(d).__builtin_object_size(1));
   constexpr<B&>(d).__builtin_object_size(2);
};
#endif//__cpp_variadic_using