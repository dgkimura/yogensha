#include "yogensha/assert.hpp"
#include "yogensha/list.hpp"

void test_size_of_list()
{
    constexpr int i = yogensha::size<yogensha::list<int, float, void>>::value;
    static_assert(i == 3);
}

void test_list_size()
{
    constexpr int i = yogensha::size<
        yogensha::list<
            yogensha::integral_constant<int, 4>,
            yogensha::integral_constant<int, 2>
        >
    >::value;

    static_assert(i == 2);
}

void test_list_append()
{
    constexpr int i = yogensha::size<
        yogensha::append<
            yogensha::list<
                yogensha::integral_constant<int, 4>,
                yogensha::integral_constant<int, 2>
            >,
            yogensha::integral_constant<int, 1>
        >::type
    >::value;

    static_assert(i == 3);
}

void test_list_prepend()
{
    constexpr auto i = yogensha::front<
        yogensha::prepend<
            yogensha::integral_constant<int, 6>,
            yogensha::list<
                yogensha::integral_constant<int, 4>,
                yogensha::integral_constant<int, 2>
            >
        >
    >::type::value;

    static_assert(i == 6);
}

void test_list_front()
{
    constexpr auto i = yogensha::front<
        yogensha::list<
            yogensha::integral_constant<int, 4>,
            yogensha::integral_constant<int, 2>
        >
    >::type::value;

    static_assert(i == 4);
}
