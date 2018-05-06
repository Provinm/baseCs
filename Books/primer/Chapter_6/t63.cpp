#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int odd[] = {1,3,5,7};
int even[] = {0,2,4,6};

decltype(odd) *func(int i)
{
    return (i%2) ? &odd : &even;
}

int main()
{
    int i {4};
    for (auto k : *func(4)){
        cout << k << endl;

    }

}