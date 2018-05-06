#include <iostream>

int p218()
{
    int *p = 0, *p2 = 0;
    int val = 1;

    p = &val;
    std::cout << p << " " << *p << std::endl;

    *p = 3;
    std::cout << p << " " << *p << std::endl;

    int v2 = 10;
    p2 = &v2;
    p = p2;
    std::cout << p << " " << *p << std::endl;

}

int p219()
{
    // 指针针对内存地址操作
    // 引用只是变量的别名
}

int p220()
{
    int i = 42; // 初始化变量，赋值
    int *p1 = &i; // 初始化指针，指向 i 
    *p1 = *p1 * *p1; // 指针指向的值进行乘法
}



int main()
{
    p218();
}