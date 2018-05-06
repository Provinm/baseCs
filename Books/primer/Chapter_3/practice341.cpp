#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;



int p322()
{
    string s("some,string");
    for (auto i=s.begin(); i!=s.end() && !isspace(*i); ++i){
        *i = toupper(*i);
    }

    cout << s << endl;

}

int p323()
{
    vector <int> ten(10, 4);
    // vector <int>::iterator i;
    for (auto i=ten.begin(); i!=ten.end(); ++i){
        *i = *i * 2;
    }

    for (auto j=ten.cbegin(); j!=ten.cend(); ++j){
        cout << *j << endl;
    }

}

int main()
{
    // p322();
    p323();
}