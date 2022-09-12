#include <iostream>

int main()
{
    int age;
    std::cout << "How old are you?";
    std::cin >> age;
    std::cout << "In 10 years you are going to be " << age + 10 << std::endl;
    return 0;
}