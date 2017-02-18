#include "yogensha/assert.hpp"
#include "yogensha/list.hpp"

void test_size_of_list()
{
    constexpr int i = yogensha::size<yogensha::list<int, float, void>>::value;
    static_assert(i == 3);
}
