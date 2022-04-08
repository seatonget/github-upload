
#include <iostream>
#include "Foo.hpp"

Foo::Foo():x_{0}
{
}

Foo::Foo(int x) :x_{x}
{
}

void Foo::Output()
{
    std::cout << "Foo::x_ = " << x_ << std::endl;
}
