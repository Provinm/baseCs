#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


int p314()
{
    int num;
    vector <int> container;
    while (cin >> num){
        container.push_back(num);
    }


}


int p317()
{
    vector <string> container;
    string str;
    while (cin >> str){
        // str = toupper(str);
        for (auto &k : str){
            k = toupper(k);
        }
        container.push_back(str);
    }

    for (auto i : container){
        cout << i << endl;
    }
}

int p320()
{
    vector <int> container;
    int num;
    while (cin >> num){
        container.push_back(num);
    }
    int length = container.size();
    int end = container.size() / 2;
    int tem_sum;
    for (int i=0; i< end; ++i){
        tem_sum = container[i] + container[length-i-1];
        cout << tem_sum << endl;
    }

    return 0;



}


int p318()
{
    vector <int> ivec;
    ivec.push_back(43);

    for (auto i : ivec){
        cout << i << endl;
    }
}
int main ()
{
    // p314();
    // p317();
    // p318();
    p320();
}