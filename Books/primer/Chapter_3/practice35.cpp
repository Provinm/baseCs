#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

unsigned txt_size()
{
    /*...*/
    return 1;
}


int p327()
{
    unsigned buf_sz = 1024;
    int ia[buf_sz];
    int ia2[txt_size()];
    int ia3[4 * 7 -14];
    // char st[11] = 'func';
}

int p331()
{
    unsigned container[10] = {};
    for (auto i=0; i!=10; ++i){
        container[i] = i;
    }

    for (auto j : container){
        cout << j << endl;
    }

    // return container;
}

int p332()
{
    unsigned container[10] = {};
    for (auto i=0; i!=10; ++i){
        container[i] = i;
    }

    unsigned (&c2) [10] = container;

    for (auto j : c2){
        cout << j << endl;
    }

}


int p353()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    int *p1=&arr[10], *p2=&arr[20];
    p1 += p2 -p1;  // 这个就相当于把 p2 赋值给 p1
    cout << *p1 << endl;

}

int p354()
{
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    // for (auto &i: arr){
    //     i = 0;
    //     cout << i << endl;
    // }

    for(auto i=begin(arr); i!=end(arr); ++i){
        arr[*i] = 0;
    }

    for (auto i: arr){
        // i = 0;
        cout << i << endl;
    }

}

int p336()
{
    int arr[5] = {1,2,3,4,5};
    int arr2[5] = {1,2,3,4,6};
    int *p = arr, *p2 = arr2;
    int flag = 0;
    while (*p || *p2){
        if (*p != *p2){
            flag = 1;
        }

        ++p;
        ++p2;
    }

    cout << flag << endl;
}

int p337()
{
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while (*cp){
        cout << *cp << endl;
        ++cp;
    }
}


int p339()
{
    string s1 = "a string a";
    string s2 = "a string a";

    if (s1 == s2){
        cout << "s1 == s2" << endl;
    }

    const char cs1[] = "a string a";
    const char cs2[] = "a string a";

    if (strcmp(cs1, cs2) == 0){
        cout << "cs1 == cs2" << endl;
    }
}

int p340()
{
    const int sz = 3;
    char s1[] = {"a string"};
    char s2[] = {"b string"};

    char s3[] = {"c string"};
    strcat(s3, s1);
    cout << s3 << endl;

    strcat(s1, s2);
    strcpy(s3, s1);
    cout << s3 << endl;
}

int main()
{
    // p327();
    // p331();
    // p332();
    // p353();
    // p354();
    // p337();
    // p336();
    // p339();
    p340();
}