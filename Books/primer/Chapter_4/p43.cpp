#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int p410()
{
    int num;
    while (cin >> num){
        if (num == 42){
            break;
        }
    }
}

int p411()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a>b && b>c && c>d){
        cout << "success" << endl;
    }
}

int main()
{
    // p410();
    p411();
}