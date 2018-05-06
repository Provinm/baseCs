#include <iostream>

// 练习 1.3
// int main()
// {
//     std::cout <<  "hello, world" << std::endl;
// }

// 练习 1.4

int main()
{
    std::cout << "input two numbers" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "result is " << v1 * v2 << std::endl;
    return 0;
}

/*
how to run a c++ file?
first, compile it as follows:

    g++ yourfile.cpp -o yourfile

then, run it:

    ./yourfile

*/