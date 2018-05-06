#include <iostream>
// #include <string>
#include <cctype>
using std::string;
using std::cout; 
using std::endl;
using std::cin;

int p36()
{
    string s = "hello, world";
    string x = "x";
    for (auto &c : s){
        c = x[0];
    }

    cout << "p36 = " << s << endl;
}

int p37()
{
    string s = "hello, world";
    string x = "x";
    for (char &c : s){
        c = x[0];
    }

    cout << "p36 = " << s << endl;
}

int p38()
{
    string s = "hello, world";
    char x = 'c';
    // decltype(s.size()) idx = 0; 
    // while (idx != s.size()){
    //     s[idx] = x；
    //     ++idx；
    // }

    for (int idx = 0; 
         idx <= s.size();
         ++idx){
             s[idx] = x;
            //  ++idx;
         }

    cout << "p38 = " << s << endl;
    return 0;
}


int while_p38()
{
    string s = "hello, world";
    char x = 'c';
    decltype(s.size()) idx = 0; 
    while (idx <= s.size()){
        s[idx] = x;
        ++idx;
    }
    cout << "p38 = " << s << endl;
    return 0;
}


int p39()
{
    string s = "hee";

    cout << s[0] << endl;
}

int p40()
{
    string raw;
    cin >> raw;
    string res;
    for(int idx=0; idx<=raw.size(); ++idx){
        if (!ispunct(raw[idx])){
            res += raw[idx];
        }
    }

    cout << "res is " << res << endl;
}

int p41()
{
    const string s = "keep out!";
    for (auto &c : s){
        /* .. */
    }

}

int main()
{
    // p36();
    // p37();
    // p38();
    // p39();
    // p40();
    // p41();
    while_p38();
}