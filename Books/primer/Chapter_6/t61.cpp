#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int fact(int val)
{
    int ret = 1;
    while (val > 1){
        ret  *= val--;

    }

    return ret;
}

size_t count_calls()
{
    static size_t ctr = 0;
    return ++ctr;
}

void reset(int &i)
{
    i = 0;
}

int p622()
{
    int j = 10;
    reset(j);
    cout << j << endl;
}



int main()
{
    // int j = fact(5);
    // cout << j << endl;
    // return 0;

    // for (int i; i!=10; ++i){

    //     cout << count_calls() << endl;
    // };
    // return 0;

    p622();
}

