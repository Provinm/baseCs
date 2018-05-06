#include <iostream>

int main()
{
    int curr = 0, val = 0;
    if (std::cin >> curr) {
        int cnt = 1;
        while (std::cin >> val){
            if (val == curr) {
                ++cnt;
            }
            else {
                std::cout << curr << "occurs" 
                          << cnt << " times" << std::endl;
                curr = val;
                cnt = 1;
            }
        }

        std::cout << curr << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}