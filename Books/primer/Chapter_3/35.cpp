#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::end;
using std::begin;

int init_arr()
{
    const unsigned sz =3;
    int ia[sz] = {1, 3, 5};
    int ia2[sz] = {0, 1, 2};
    string a4[3] = {"hi", "bye"};

    cout << *ia << endl;

}

int init_string_arr()
{
    char a1[] = {'c', 'v', 'b'};
    char a2[] = {'c', '+', '+', '\0'};

    for (auto i : a2){
        cout << i << endl;
    }


}

int arr_statement()
{
    int *ptrs[10];  // ptrs 含有 10 个整形指针的数组
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int (*ptr2)[10] = &arr; // ptr2 指向 10 个元素的数组
    int (&arrref) [10] = arr;  // arrref 引用一个含有 10 个整数的数组

    int *(&array)[10] = ptrs;
}


int divide_grades()
{
    unsigned scores[11] = {};
    unsigned grade;
    while (cin >> grade){
        ++scores[grade/10];
    }

    for (auto i : scores){
        cout << i << endl;
    }
}

int point_and_arr()
{
    string nums[] = {"one", "two", "three"};
    string *p = &nums[0];

    string *p2 = nums; // == *p2 = &nums[0]
    int ia[] = {0,1,2,3,4,5,6,7,8,9};  // 十个元素的数组
    auto ia2(ia);   // ia2 指针， 直响 ia 第一个元素


}

// 指针也可以迭代
int pointer_is_iterator()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9}; 
    // int *p = arr; // p 指向第一个元素
    int *e = &arr[10]; // e 指向 arr 的尾元素的下一指针

    for (auto *i=arr; i!=e; ++i){
        cout << *i << endl;
    }
}


int std_begin_end()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9}; 
    int *beg = begin(arr);
    int *last = end(arr);

    for (auto i = beg; i != last; ++i){
        cout << *i << endl;
    }
}

int pointer_move()
{
    const int sz = 5;
    int arr[sz] = {1,2,3,4,5};
    int *ip = arr;
    int *ip2 = ip + 4;

    int *p = arr + sz; // arr 指向第一个元素的指针，sz 移动此指针， 但注意不要将 arr 的指针移动尾元素后面去了

    // 指针减法
    auto n = end(arr) - begin(arr);
    // n 是一种叫 ptrdiff_t 的类型


}

int reslove_arr_pointer()
{
    int ia[] = {1,2,3,4,5};
    int last = *(ia+4);  // 解引用
    int l = *(&(ia[2]));

    cout << l << endl;
}

int c_string()
{
    char ca[] = {'c', 's', '+'};
    cout << strlen(ca) << endl;

    string s1 = "a string a";
    string s2 = "a string b";

    if (s1 < s2){
        cout << 1 << endl;
    }

    const char ca1[] = "a string a";
    const char ca2[] = "a string b";
    if (strcmp(ca1, ca2)<1){
        cout << 2 << endl;
    }

    string largestr = s1 + " " + s2;
    // strcpy(largestr, ca1);
    // cout << "cpy " << largestr << endl;
    // strcat(largestr, " ");
    // cout << "cat space " << largestr << endl;
    // strcat(largestr, ca2);
    // cout << "cat ca2" << largestr << endl;

}



int main()
{
    // init_arr();
    // init_string_arr();
    // arr_statement();
    // divide_grades();
    // pointer_is_iterator();
    // std_begin_end();
    // reslove_arr_pointer();
    c_string();
}