#include <iostream>

template <class Ta, class Tb>
void swap(Ta& a, Tb& b) {
    Ta temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5;
    double b = 10;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swap(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}