#include <iostream>

// 1 - Enter a number
// 2 - 9.9999
// 3 - 9 9.999
// Show

int main()
{
    // Enter a number
    int value = 0;

    std::cout << "Entert value : ";
    std::cin >> value;

    int offset = 10000;
    for (int i = 0; i < 5; i++)
    {     
        std::cout << "Value " << i << " : " << (value / offset) % 10 << std::endl;
        offset /= 10; // offset = offset / 10;        
    }

    return 0;
}
