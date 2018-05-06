#include <iostream>
#include <vector>
#include <cstring>

using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::end;
using std::begin;

int mutiple_arr()
{
    int ia[3][4];
    int arr[10][20][30] = {0};
    int arr2[3][4] = {
        {0,1,2,3},
        {4,5,6,7},
        {8,9,10,11}
    };

    int arr3[2][3] = {0,1,2,3,4,5};

    int arr4[3][4] = {
        {1},
        {2},
        {3}
    };


    arr2[1][2] = arr4[3][1];
    int (&row)[4] = arr2[2];
}


int iterate_mutiple_arr()
{
    int arr2[3][4] = {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
        };   

    // for (size_t i=0; i!=3; ++i){
    //     for (size_t j=0; j!=4; ++j){
    //         cout << arr2[i][j] << endl;
    //     }
    // }

    for (auto &row : arr2){
        for (auto col : row){
            cout << col << endl;
        }
    }
}

int point_to_end()
{
    int arr2[3][4] = {
            {0,1,2,3},
            {4,5,6,7},
            {8,9,10,11}
        };  
    

    int (*p)[4] = &arr2[2];

    // for (auto i=begin(*p); i!=end(*p); ++i){
    //     cout << *i << endl;
    // }

    for (auto i : *p){
        cout << i << endl;
    }
}

int main()
{
    // mutiple_arr();
    // iterate_mutiple_arr();
    point_to_end();
}