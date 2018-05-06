#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int p321()
{
    vector <int> num;
    int tem;
    while (cin >> tem){
        num.push_back(tem);
    }

    auto beg = num.begin(), end = num.end();
    auto mid = num.begin() + (end-beg) / 2;
    int tem_add;
    int j = 1;
    for (auto i = beg; i != mid; ++i){
        tem_add = *i + *(end-j);
        ++j;
        cout << tem_add << endl;
    }
    // cout << *beg << endl;
    // cout << *(end-1) << endl;
}


int p325()
{
    vector <unsigned> scores(11, 0);
    auto beg = scores.begin();
    unsigned grade;
    int scale;
    while (cin >> grade){
        if (grade <= 100){
            scale = grade / 10;
            *(beg+scale) += 1;
        }
    }

    for (auto i:scores){
        cout << i << endl;
    }
}


int main()
{
    // p321();
    p325();
}