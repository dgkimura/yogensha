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
template <typename List>
struct size
{
};

// Here we partially specialize size.
//   - List:
//         A template template parameter waiting a template parameter pack as
//         an argument.
//   - Elements
//         A template parameter pack.
//   - Elements...
//         Triggers an expansion of every type in the pack.
template <template<typename ...> class List, typename... Elements>
struct size<List<Elements...>>
    : yogensha::integral_constant<std::size_t, sizeof...(Elements)>
{
};

// At this point the nature of List parameter is unknown, and so we cannot give
// size a proper definition.
template <typename List, typename Element>
struct append
{
};

template <template <typename ...> class List, typename... Elements, typename E>
struct append<List<Elements...>, E>
{
    using type = List<Elements..., E>;
};

// At this point the nature of List parameter is unknown, and so we cannot give
// size a proper definition.
template <typename List, typename Element>
struct prepend
{
};

template <template <typename ...> class List, typename E, typename... Elements>
struct prepend<E, List<Elements...>>
{
    using type = List<E, Elements...>;
};

// At this point the nature of List parameter is unknown, and so we cannot give
// size a proper definition.
template <typename List>
struct front
{
};

template <template <typename ...> class List, typename E, typename... Elements>
struct front<List<E, Elements...>>
{
    using type = E;
};

}
