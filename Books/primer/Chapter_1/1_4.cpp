#include <iostream>

int main()
{
    int sum = 0, val = 1;
    // the while statement will continously work if the value of val less than 10
    while (val <= 10) {
        sum += val; // add val to sum
        ++val; // accumulate val 
    }
    std::cout << "sum of 1 - 10 is " << sum << std::endl;
    return 0;
}