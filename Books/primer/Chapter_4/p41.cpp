#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int p42()
{
    vector <int> vec = {1,2,3,4,5};
    cout << *vec.begin() << endl;
    cout << *(vec).begin() << endl;

    cout << "分割线" << endl;
    cout << *vec.begin() + 1 << endl;
    cout << (*vec.begin()) + 1 << endl;
}

int main()
{
    p42();

}