#include <iostream>

class MyClass
{

public:
    int a = 5;
};

int main()
{

    MyClass myClass;

    std::cout << myClass.a << std::endl;

    return 0;
}