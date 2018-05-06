#include <iostream>
#include <vector>
#include <initializer_list>

using std::string;
using std::vector;
using std::initializer_list;
using std::cout;
using std::cin;
using std::endl;

bool have_upper_word(const string &s)
{
    for (auto &i : s){
        if (isupper(i)){
            return true;
        }
    };

    return false;
}

string convert_string_to_upper(string &s)
{
    for (auto &i : s){
        i = toupper(i);
    };

    return s;
}


int p617()
{
    string s = "Hello, WORld";
    bool b = have_upper_word(s);
    string new_s = convert_string_to_upper(s);

    cout << b << endl;
    cout << new_s << endl;

}

vector<int> add_num(int &i, vector<int> &vec)
{
    vec.push_back(i);
    return vec;
}


int p618()
{
    vector <int> vec;
    int i = 10;
    vector <int> n_vec = add_num(i, vec);
    for (auto i : vec){
        cout << i << endl;
    }

}

double calc(double)
{
    // cout << double << endl;
}

int p619()
{
    double i = 3.14, j = 4.25;
    int k = 10;
    calc(k);
}

int compare(int &i, int *p)
{
    if (i == *p || i > *p){
        return i;
    } else {
        return *p;
    }
}

int p621()
{
    int i = 10;
    int j = i;
    j += 10;
    int *p = &j;
    cout << compare(i, p) << endl;

}

void swap_ptr(int *(&p1), int *(&p2))
{
    int *p3 = p1;
    p1 = p2;
    p2 = p3;
}

int p622()
{
    int i=10, j=20;
    int *p1 = &i;
    int *p2 = &j;

    swap_ptr(p1, p2);
    cout << *p1 << endl;
    cout << *p2 << endl;
}

int sub_p627(initializer_list<int> &l)
{
    int sum = 0;
    for (auto i:l){
        sum += i;
    };

    cout << sum << endl;
}

int p627()
{
    initializer_list <int> l {1,2,34,5,6,7};
    sub_p627(l);

}

int sub_p633(size_t i, vector<int> con)
{
    size_t sz = con.size();
    cout << con[i++] << endl;
    if (i == sz){
        return 0;
        
    } else {
        return sub_p633(i, con);
    }

}
int p633()
{

    vector <int> con = {1, 2, 3,4, 5};
    size_t i = 0;
    sub_p633(i, con);
}

// int p633()
// {
//     string s = "hello0";
//     auto beg = s.begin(), end = s.end();
//     while (beg != end){
//         cout << *beg++ << endl;
//     }
// }

int main()
{
    // p617();
    // p618();
    // p621();
    // p622();
    // p627();
    p633();
}