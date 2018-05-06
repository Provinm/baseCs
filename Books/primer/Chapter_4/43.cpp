#include <iostream>
#include <vector>
#include <cstring>


using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int print_string()
{
    vector <string> text{"this", "is", "string", "."};
    for (const  auto &r : text){

        cout << r;
        if (r.empty() || r[r.size()-1] == '.'){
            cout << endl;
        } else {
            cout << " ";
        }
    }
}

int main()
{
    print_string();
}