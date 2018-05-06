#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


int p413()
{
    int i; double d;
    d = i = 3.5;
    cout << d << i << endl; // 都是　3

}

int p418()
{
    vector <int> num = {1,2,3,4};
    auto beg = num.begin();

    while (beg != num.end()){
        cout << *++beg << endl;  // 2340
    }
}

int main()
{
    // p413();
    p418();
}