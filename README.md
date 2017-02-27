# yogensha

[![Build Status](https://travis-ci.org/dgkimura/yogensha.svg?branch=master)](https://travis-ci.org/dgkimura/yogensha)

The yogensha library provides simple compile-time data structures. It is
intended to demonstrate template metaprogramming techniques.


## Build
You will need a compiler with full C++11 support. You can then use CMake to
generate MakeFiles for this project.
```
$ mkdir build && cd build
$ cmake ..
$ make
```
Unittests are run at compile time through the usage of static_assert statements.


## References
- [Practical C++ Metaprogramming](http://www.oreilly.com/programming/free/practical-c-plus-plus-metaprogramming.csp)
