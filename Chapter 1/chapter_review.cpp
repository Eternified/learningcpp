#include <iostream>

int main()
{
    std::cout << "What is the first and second number? ";

    int x { };
    int y { };

    std::cin >> x >> y;

    std::cout << "Subtracting second from first: " << x - y << "\n";
    std::cout << "Adding first and second: " << x + y << "\n";

    return 0;
}
