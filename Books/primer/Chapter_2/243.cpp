#include <iostream>


/*  对于指针来说，
指针本身是常量，指针指向的对象是常量
这需要分情况来讨论
*/


int top_const()
{
    //  
    int i = 0;
    int *const p1 = &i; // 顶层 const
    const int ci = 42; // 顶层 const
    const int *p2 = &ci; // 底层 const ， 可改变 p2 
    const int *const p3  = p2; // p3 为底层， p2 为顶层
    
}