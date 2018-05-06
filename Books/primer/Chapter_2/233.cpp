#include <iostream>

int pointer_to_pointer()
{
    int v = 1;
    int *p1 = &v; // 指向 v 的指针
    int **p2 = &p1; // 指向指针 p1 的指针

    std::cout << *p1 << **p2 << std::endl;
}

int reference_to_pointer()
{
    // 指向指针的引用
    int i = 42;
    int *p;
    int *&r = p;  // 指针的引用，即指针的别名

    r = &i;  // 指针 r / p 指向 i
    *r = 0;  // 解引用 r , 使 i *r, *p , i 的值为 0
    return 0;
}

int main()
{
    pointer_to_pointer();
}

