#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

const string &shorterString(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;

}

int t641()
{
    string s1 = "hello";
    string s2 = "world";

    cout << shorterString(s1, s2) << endl;
}

typedef string::size_type sz;
string screen(sz ht=24, sz wid=80, char backgroud = ' ')
{
    cout << "ht = "<< ht << endl;
    cout << "wid = "<< wid << endl;
    cout << "backgroud = "<< backgroud << endl;

}

char *init(int ht, int wd=80, char groud=' ')
{
    cout << ht << endl;
    cout << wd << endl;
    cout << groud << endl;
}

void t651()
{
    // sz h=30, w=40;
    // char back = 'g';
    // screen(h, w, back);

    // init();
    // init(24, 10);
    init (14, '*');
}

int main()
{
    // t641();
    t651();
}