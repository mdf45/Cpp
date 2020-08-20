#include <iostream>

template <class T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 5, b = 10;

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    swap(a, b);

    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;

    return 0;
}