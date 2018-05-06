#include <iostream>
// #include <string>
#include <cctype>
using std::string;
using std::cout; 
using std::endl;
using std::cin;

int std_string()
{
    string s1; // 初始化一个空字符串
    string s2 = s1; // s2 是 s1 的副本
    string s3 = "hiya"; // s3 是 hiya 的副本
    string s4(10, 'c'); // s4 是 10 个 c
    string s5("hiya this is s5 ");

    cout << "s1 " << s1 << endl;
    cout << "s2 " << s2 << endl;
    cout << "s3 " << s3 << endl;
    cout << "s4 " << s4 << endl;
    cout << "s5" << s5 << endl;

}

int diff_init_ways()
{
    string s6 = "hiya"; // 拷贝初始化， 初始化是要为 双引号
    string s7("this is s7"); // 直接初始化
    string s8(10, 't'); // 直接初始化, 括号内的字符串要为 单引号
    string s9 = string(10, 'y'); // 初始化然后拷贝

}

int work_with_string()
{
    // os<<s;
    string s("this is s"); 
    bool s_empty = s.empty();
    int s_length = s.size();
    char sn = s[5];
    string ss = s + s;
    string s3 = string("this is a");
    cout << ss << endl;


}

int read_write_string()
{
    string s;
    cin >> s;
    cout << s << endl;
    return 0;
}

int readless_string()
{
    string word;
    while (cin >> word)
        cout << "read word " << word << endl;
    return 0;
}

int getline_string()
{
    string line;
    while (getline(cin, line)){
        cout << "getline " << line << endl;
    }
    return 0;
}


int accumulate_string()
{

    string line;
    string sum_line;
    while (getline(cin, line)){
        if (line.empty()){
            cout << "total string is "  << sum_line << endl;
            return 0;

        } else {
            sum_line += line;
        }
    }
}

int compare_string()
{
    string s1("this is a ");
    string s2("this is b ");

    bool s = s1 > s2 ;
    cout << "compare res is " <<  s << endl;

}

int add_strings()
{
    string s1 = "hello", s2 = "world";
    string s3 = s1 + s2 + ", " + "\n";

    // 字符串的字面值和 string 对象是不一样的
    // 错误示范
    // string s4 = "hello" + "world "; // 字面值的和不是 string 对象


}

int test_cctype()
{
    string s = "hello";
    // auto s1 = toupper(s);  
}

int cope_with_every_char()
{
    string str("some string");
    for (auto c: str){
        cout << c << endl;
    }
    return 0;
}

int check_puntc()
{
    string s("hello, world!!!");
    decltype(s.size()) punct_cnt = 0;
    for (auto c : s){
        if (ispunct(c)){
            ++punct_cnt;
        }

    }
    cout << punct_cnt << " punctuation characters in "
                      << s << endl;
}

int upper_string()
{
    string s("hello, world!!!");
    for (auto &c : s){
        c = toupper(c);
    }
    cout << s << endl;
}

int iterate_string_by_idx()
{
    string s("something string");
    for (int index = 0;
         index != s.size() && !isspace(s[index]); ++index){
             s[index] = toupper(s[index]);
         } 

    cout << "res is " << s << endl;

}

int random_hex_string()
{
    const string hexdigits = "0123456789ABCDEF";
    cout << "Enter a series of numbers between 0 and 15"
         << " separated by spaces. hit enter when finished"
         << endl;
    string result;
    string::size_type n;
    while (cin >> n){
        if (n < hexdigits.size()){
            result += hexdigits[n];
        }
    }

    cout << "res is " << result << endl;

}

int main()
{
    // std_string();
    // work_with_string();
    // read_write_string();
    // readless_string();
    // getline_string();
    // accumulate_string();
    // compare_string();
    // cope_with_every_char();
    // check_puntc();
    // upper_string();
    // iterate_string_by_idx();
    random_hex_string();
}
