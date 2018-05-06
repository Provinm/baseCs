#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int example()
{
    int i,j,k;
    const int ci = i;

    k = 0;
    k = 3.14; // k ==  3

    vector <int> vi;
    vi = {1, 2, 3, 4};

    int ival, jval;
    ival = jval = 1;

    string s1, s2;
    s1 = s2 = "string";
    
}

int example46()
{
    string s1 = "a string", *p = &s1;
    auto n = s1.size();
    n = (*p).size();
    n = p -> size();

}

int main ()
{
    // example();
    example46();
}