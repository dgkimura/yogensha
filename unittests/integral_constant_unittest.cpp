#include "yogensha/assert.hpp"
#include "yogensha/integral_constant.hpp"

void test_integral_constant()
{
    static_assert((yogensha::integral_constant<int, 3>::value) == 3);
}

void test_integral_constant_arithmatic()
{
    typedef yogensha::integral_constant<int, 2> two_t;
    typedef yogensha::integral_constant<int, 4> four_t;

    static_assert(two_t::value * 2 == four_t::value);
}
