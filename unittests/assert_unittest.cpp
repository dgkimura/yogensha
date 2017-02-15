#include "gtest/gtest.h"

#include "yogensha/assert.hpp"

TEST(test_assert, test_static_assert)
{
    static_assert(1==1);
}
