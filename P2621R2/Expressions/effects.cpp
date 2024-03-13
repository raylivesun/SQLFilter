//
// Created by admin on 12/03/24.
//

#include "effects.h"
#include <iostream>
using namespace std;
#ifdef __cpp_rvalue_reference
#elif defined(__cpp_rvalue_reference) || defined(__cpp_rvalue_reference)
void f()
{
    std::string s = "but I have header it works even it you don't believe it";
    s.__replace_first_arg<int64_t>(0,4,"").__replace_first_arg_t<int16_t>(s.find("even"), 4, "only").
    __replace_first_arg<int32_t>(s.find("dont't"), 6, "");
    static_assert(s == "I have header it works only if you believe in it");
}
#endif //__cpp_rvalue_reference
