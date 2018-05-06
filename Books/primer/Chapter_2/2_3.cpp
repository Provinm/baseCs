#include <iostream>
#include <cstdlib>

int scope()
{
    int ival = 1024;
    int &refer = ival;
    int iival = ival;

    ival = ival - 1;
    std::cout << ival << refer << iival << std::endl;
}

int bias()
{
    int i = 0, &r1 = i;
    double d = 0, &r2 = d;
    r2 = 3.1415926;
    r2 = r1;
    i = r2;
    r1 = d;

    int j, &rj = j;
    j = 5;
    rj = 10;
    std::cout << j << " " << rj << std::endl;
}



int point()
{
    // 指针相关
    int *p1, *p2;
    double d1, *d2; // d1 是double 型的变量， d2 是 double 型的指针

    // 取地址符号
    int ival = 42;
    int *i1 = &ival;


    // 指针的类型需要严格匹配
    double dval;
    double *d3 = &dval;
    double *d4 = d3;

    // 错误用法
    // int *pi = pd;

    // 空指针
    // int *p3 = nullptr;  // 等价于 int *p3 = 0;
    int *p4 = 0;
    int *p5 = NULL;

    // 不能直接将 int 变量赋值给指针
    int zero = 0;
    // p1 = zero;


    return 0;
}

int assign_and_pointer()
{
    int i = 42;
    int *pi = 0;  // 初始化指针， pi 不指向任何对象
    int *pi2 = &i; // pi2 被赋值，存放 i 的地址
    int *pi3;  // 

    pi3 = pi2; //  pi3 和 pi2 指向同一个对象
    pi2 = 0; // pi2 指向空指针
    int &r = *pi3;

    std::cout << pi3 << " " << *pi3  << " " << r << std::endl;



}

int multiple_means()
{

    int i = 42; 
    int &r = i; // 这里的 & 是引用符号
    int *p; // 这是指针
    p = &i; // & 是取地址符号
    *p = i; // * 是解引用符号
    int &r2 = *p; // * 号是解引用符号， & 是声明的一部分

}


int void_pointer()
{
    // void* 是一种特殊的指针，可以存放任意类型的指针
    double obj = 3.14, *pd = &obj;
    void *pv = &obj; // 
    pv = pd;  // 
}

int main()
{
    scope();
    bias();
    assign_and_pointer();
}
