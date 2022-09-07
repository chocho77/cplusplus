#include <iostream>

class MyClass
{

public:
    int a = 5;

    int getA();
};

int MyClass::getA()
{

    return a;
}

int main()
{

    MyClass myClass;

    std::cout << myClass.a << std::endl;
    std::cout << myClass.getA() << std::endl;

    return 0;
}