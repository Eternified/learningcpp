#include <iostream>

int main()
{
    std::cout << "Enter an Integer: ";
    int num { };

    std::cin >> num;

    std::cout << "Double your Integer: " << num * 2 << "\n";

    return 0;
}
