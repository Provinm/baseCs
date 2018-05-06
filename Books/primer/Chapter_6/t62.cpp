#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

// const 形参 和 实参
// 6.2.3
void fcn(const int i)
{
    // try {
    //     ++i;
    // } catch (exception) {
    //     cout << "can not designate i " << endl;
    // }
}

string::size_type find_char(const string &s, char c)
{
    auto ret = s.size();
    int occurs = 0;

    for (decltype(ret) i=0; i!=s.size(); ++i){
        if (s[i] == c){
            if (ret == s.size()){
                ret = i;
            }
            occurs += 1;
        };
    }

    cout << occurs << endl;
    cout << ret << endl;
    return ret;
}

// t624 
void print(const string *p)
{
    // if (p){
    //     while (*p){
    //         cout << *p++ << endl;
    //     }
    // }
    for (auto i : *p){
        cout << i << endl;
    }

}

void print_1(const int *beg, const int *end)
{
    while (beg != end){
        cout << *beg++ << endl;
    }
}

int t624()
{
    // string s = "hello,world";
    int s[8] = {1,2,3,4,5,6,7,8};
    // string *p = &s;
    // print(p);
    // auto beg=s.begin(), end=s.end();
    // print_1(beg, end);
}

// t626 

int main()
{
    // fcn();
    // find_char("hello,world", 'l');
    // t624();
    // string s1 = argv[1], s2 = argv[2];
    // cout << s1 + s2 << endl;
}