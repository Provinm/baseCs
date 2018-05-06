#include <iostream>




double applyDiscount(double x, double y)
{
    return x + y;
}

int di = 100;
int whati()
{
    int di = 10;
    int dj = di;
    std::cout << dj << std::endl;
}

int main()
{
    bool b = 1;
    // float c = 1E - 3F;
    long double c = 3.14159L;
    double price = 109.99, discount = price * 0.16;
    double d = applyDiscount(price, discount);
    int unit_sold = 0;
    // int unit_sold = {0};
    // int unit_sold {0};
    // int unit_sold (0);
    long double ld = 3.1415926;

    int a(ld), bb = { ld };

    int i = {3.14};
    // double ca = cb = 3.141526;
    int _ ;
    int Dou = 3; //不符合规范
    whati();
}