#include <iostream>

int const_expression()
{
    const int max_files = 20;
    const int limit = max_files + 1;
    // int staff_size 
}

int keyword_constexpr()
{
    constexpr int mf = 20;
    constexpr int limit = mf + 1;
    // constexpr int sz = size(
}

int pointer_constexpr()
{
    const int *p = 0;
}

int main()
{
    const_expression();
}