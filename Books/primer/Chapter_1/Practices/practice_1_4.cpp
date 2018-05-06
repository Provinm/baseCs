#include <iostream>


// practice 1.9
// int main()
// {
//     int sum = 0, count = 50;
//     while (count <= 100){
//         sum += count;
//         ++count;
//     }
//     std::cout << "the sum of 50 - 100 is " << sum << std::endl;
// }

// 1.10

// int main()
// {
//     int sum = 0, count = 10;
//     while (count > 0){
//         // sum += count;
//         --count;
//         std::cout << "current count is " << count << std::endl;
//     }
// }


// 1.11 

int main()
{
    std::cout << "input two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    while (v1 <= v2){
        ++v1;
        std::cout << "current number is " << v1 << std::endl;
    }
}
