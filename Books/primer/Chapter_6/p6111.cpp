#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int p66(int i)
{
    static int j = 0;
    if (i == 1){
        return j;
    } else {
        ++j;
        return p66(--i);

    }
}

int p67()
{
    static int ctr = 0;
    if (ctr == 0){
        ++ctr;        
        return 0;
    } else {
        ++ctr;
        return 1;
    }
}

int p610()
{
    int i = 10, j = 20;
    int k;
    int *p = &i, *q = &j;

    k = i;
    *p = j;
    *q = k;

    cout << "i = " << i 
         << "j = " << j
         << endl;

}

int main()
{
    // int k = 5;
    // cout << p66(k) <<  endl;

    // for (int j; j!=10; ++j){
    //     cout << p67() << endl;
    // }

    p610();
}