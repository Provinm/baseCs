#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


int t47()
{
    int grade = 91;
    string final_res = (grade > 60) ? "pass" : "fail";

    cout << final_res << endl;

    string f2 = (grade > 90) ? "A" :
                            (grade < 60) ? "C" : "B";

    
    cout << f2 << endl;
}


int t49()
{
    int i = 1;
    char c = 'a';
    string s = "string";

    cout << sizeof(i) << endl;
    cout << sizeof(c) << endl;
    cout << sizeof(s) << endl;
}


int main()
{
    // t47();
    t49();
}