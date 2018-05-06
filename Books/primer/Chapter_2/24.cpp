#include <iostream>



int get_const()
{
    return 5;

}



int define_const()
{

    // 使用 const 限定一个不能被改变的值
    const int buffsize = 512; 

    // const 一旦被创建就不能被更改
    const int i = 1;
    const int j = get_const();

    // const 的值仅在文件内有效
}

int initiaize_const()
{
    int ci = 1024;
    // const int &r1 = ci;
    // r1 = 42;
    // int &r2 = ci;   // ci 是常量， r2 是非常量

    int i = 42;
    const int &r1 = i;
    const int &r2 = 42;
    const int &r3 = r1 * 2;
    // int &r4 = r1 * 2
    

}

int exception_const()
{
    // const 的引用也可能是一个非 const 的对象
    int i = 42;
    int &r1 = i;
    const int &r2 = i;
    r1 = 0;
    i = 4;

    std::cout << i << ' ' << r1 << ' ' << r2 << std::endl;
}

int pointer_to_const()
{
    const double pi = 3.14;
    // double *ptr = &pi; // 普通指针不能指向常量
    const double *ptr = &pi;
    // *ptr = 42;
    int *r = 0;

}


int main()
{
    // initiaize_const();
    exception_const();
    pointer_to_const();
}