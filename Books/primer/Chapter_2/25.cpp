#include <iostream>

// 类型说明符号
int auto_type()
{
    int v1 = 1;
    double v2 = 3.0;
    auto v3 = v1 + v2;
}

// decltype 类型指示符
int decltype_()
{
    decltype(auto_type()) sum = 1;

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0;
    decltype(cj) y = x;
    // decltype(cj) z;
}

// 类型别名

int main()
{
    typedef double wages;  // 类型别名 double --> wages
    typedef wages base, *p;

    
}
