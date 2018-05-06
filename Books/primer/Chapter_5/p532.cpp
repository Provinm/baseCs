#include <iostream>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;


int p59()
{
    unsigned vcnt = 0;
    char ch;
    while (cin >> ch){
        if (ch == 'a'){
            ++vcnt;
        } else if (ch == 'e'){
            ++vcnt;
        } else if (ch == 'i'){
            ++vcnt;
        } else if (ch == 'o'){
            ++vcnt;
        }

    }

    cout << "vcnt = " << vcnt << endl;

}

int p510()
{
    unsigned vcnt = 0;
    char ch;
    while (cin >> ch){

        ch = toupper(ch);
        switch (ch){
            case 'A': case 'O': case 'I': case 'C':
                ++vcnt;
                break;
        }
    }

    cout << "vcnt = " << vcnt << endl;
}

int get_zero()
{
    return 1;
}

int p513()
{
    unsigned cnt = 0;
    // int i = get_zero();
    // switch (i){
    //     case 1:
    //         int j = get_zero();
        
    // }

    // switch (i){
    //     case 1,2,3,4:
    //         ++cnt; 
    //         break;
    //     case 0:
    //         ++cnt;
    //         break;
        
    // }

    // int b = 1 + sizeof(int);

    // cout << b << endl;

    const unsigned i = 512, j = 1024, k = 4096;
    unsigned bufsize;
    int sz = 4;
    unsigned swt = get_zero();
    switch (swt) {
        case i:
            bufsize = i * sz;
            break;

        case j:
            bufsize = j *sz;
            break;
    }
}


int main()
{
    // p59();
    // p510();
    p513();
}