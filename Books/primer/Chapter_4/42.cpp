#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int overflow()
{
    short short_val = 32767;
    short_val += 1;
    cout << "short val " << short_val << endl;

}

int type_at_int_float()
{
    int val = 42;
    double dval = 3.14;
    bool b = true;
    bool b1 = -b; // b1 依然是 true;

    cout << val / 12 << endl;
    cout << val % 8 << endl;

    cout << 30 / 3 * 21 % 5 << endl;

}



int main ()
{
    // overflow();
    type_at_int_float();
}