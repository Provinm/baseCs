#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int t544()
{
    string rsp;
    do {
        cout << "please input two values" << endl;
        int val1 = 0, val2 = 0;
        cin >> val1 >> val2;
        if (val1 == val2){
            cout << "success" << endl;
            break;
        }

        cin >> rsp;
    } while ( !rsp.empty());
}

int main()
{
    t544();
}