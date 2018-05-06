#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

int t532()
{
    unsigned acnt=0, icnt=0, ocnt=0,ucnt=0;
    char ch;
    while (cin >> ch){
        switch (ch){
            case 'a':
                ++acnt;
                break;
            
            case 'i':
                ++icnt;
                break;

            case 'o':
                ++ocnt;
                break;

            case 'u':
                ++ucnt;
                break;
        }
    }

    cout << "a = " << acnt << endl;
    cout << "i = " << icnt << endl;
    cout << "o = " << ocnt << endl;
    cout << "u = " << ucnt << endl;

}

int t5321()
{
    unsigned vcnt = 0;
    char ch;
    while (cin >> ch){
        switch (ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
                ++vcnt;
                break;
        }
    }

    cout << "vcnt = " << vcnt << endl;
}


int t5322()
{
    unsigned vcnt = 0, ocnt = 0;
    char ch;
    while (cin >> ch){
        switch(ch){
            case 'a': case 'i': case 'o': case 'c':
                ++vcnt;
                break;

            default:
                ++ocnt;
                break;
        }
    }

    cout << "vcnt = " << vcnt << endl;
    cout << "ocnt = " << ocnt << endl;
}

int main()
{
    // t532();
    // t5321();
    t5322();
}