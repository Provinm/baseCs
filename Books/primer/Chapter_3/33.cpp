#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int init_vector()
{
    // vector<string> articles = {"a", "an", "the"};
    vector<int> ivec (10, 1);
    vector<int> ivec2 (ivec);

    // vector<string> v1 {"a", "a2", "a3"};
    // vector<string> svec(10, "hi");


    vector <int> ivec3 = {1, 2, 3};
    
    // vector <string> v4{10};
    cout << *ivec3.begin() << endl;

}

int add_elements()
{
    vector <int> v2; // 空的 vector 对象
    for (int i = 0; i<=100; ++i){
        v2.push_back(i);
    }

    cout << *v2.begin() << endl;

    // example 2
    string word;
    vector <string> text;
    while (cin>>word){
        text.push_back(word);
    }

    // cout << *text.begin() << endl;

}

int iterate_vector()
{
    vector <int> v {1, 2, 3, 4, 5};
    for (auto &i : v){
        i *= i;
    }

    for (auto i : v){
        cout << "item is " << i << endl;
    }
}

int index_vector()
{
    vector <unsigned> scores (11, 0);
    unsigned grade;
    while (cin >> grade){
        ++scores[grade/10];
    }

    for (auto i : scores){
        cout << i << endl;
    }

    return 0;
}

int main()
{
    // init_vector();
    // example();
    // add_elements();
    // iterate_vector();
    index_vector();
}