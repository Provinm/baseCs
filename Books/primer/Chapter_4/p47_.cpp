#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int p421()
{
    vector <int> num = {1, 2, 3, 4, 5};
    for (auto &i : num){
        i = (i%2==0) ? i : i*2 ;
        cout << i << endl;
    }
}

int p422()
{
    int grade;
    cin >> grade ;
    string s;
    cout << "using conditional operator" << endl;
    s = (grade > 90) ? "high pass" 
                     : (grade > 75) ? "low pass"
                     : (grade > 60) ? "pass" 
                     : "fail";

    cout << "end s = " << s << endl;

    cout << "using if statement" << endl;
    if (grade > 90){
        s = "high pass";
    } else if (grade > 75) {
        s = "low pass";
    } else if (grade > 60) {
        s = "pass";
    } else {
        s = "fail";
    };

    cout << "end s = " << s << endl;
}


int p429()
{
    int x[10];
    int *p = x;  // p 指向 x 中的第一个元素

    // cout << *x << endl;

    cout << sizeof(x) << sizeof(x) / sizeof(*x) << endl;
    cout << sizeof(p) <<  sizeof(p) / sizeof(*p) << endl;
}

int p435()
{
    char c = 'c';
    int i = 3;
    char d = 'c' + 3;

    cout << d << endl;
}

int main()
{
    // p421();
    // p422();
    // p429();
    p435();
}