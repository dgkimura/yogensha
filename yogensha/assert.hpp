#pragma once

// A very simple solution to compile-time assertions. If expr evaluates to
// non-zero then the compiler will signal a compile-time error because it
// is illegal to construct a negative length array..
#define static_assert(expr) { char unnamed[(expr) ? 1 : -1]; }
