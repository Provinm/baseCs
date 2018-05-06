#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


int first_char_to_upper()
{
    string s("some, string");
    if (s.begin() != s.end()){
        auto it = s.begin();
        *it = toupper(*it);
    }

    auto l = s.end();
    cout << s << endl;
    cout << *l << endl;
}

int change_first_word_to_upper()
{
    string s("some, string");
    for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it){
        *it = toupper(*it);
    }

    cout << s << endl;

}


int type_of_iterator()
{
    vector <int> :: iterator it; // it 能读 vector int 内的内容
    string :: iterator it2;      // it2 能读写 string 对象中的字符

    vector <int> :: const_iterator it3; // it3 只能读元素，不能写元素
    string :: const_iterator it4;       // it4 只能读字符，不能写字符

}

int binary_search()
{
    vector <int> num {1,2,3,4,5,6,7,8,9,10};
    auto beg = num.begin(), end = num.end();
    auto mid = num.begin() + (end-beg) / 2;
    int sought = 1;
    while (mid != end && *mid != sought){
        if (sought < *mid){
            end = mid;
        } else {
            beg = mid + 1;
        }

        mid = beg + (end-beg) / 2;
    }

    cout << *mid << endl;
}

int main()
{
    // first_char_to_upper();
    // change_first_word_to_upper();
    binary_search();
}
