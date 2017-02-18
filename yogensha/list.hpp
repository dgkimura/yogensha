#pragma once

#include "yogensha/integral_constant.hpp"

#include <cstddef>

namespace yogensha
{

template <typename ...Values>
struct list
{
};

// At this point the nature of List parameter is unknown, and so we cannot give
// size a proper definition.
template <typename List> struct size;

// Here we partially specialize size.
//   - List:
//         A template template parameter waiting a template parameter pack as
//         an argument.
//   - Elements
//         A template parameter pack.
//   - Elements...
//         Triggers an expansion of every type in the pack.
template <template<class ...> class List, class... Elements>
struct size<List<Elements...>>
    : yogensha::integral_constant<std::size_t, sizeof...(Elements)>
{
};

}
