

#include <iostream>
#include "plates.hpp"

int main()
{
    Plates plates(5);

    plates.push(1);
    plates.push(2);
    plates.push(3);
    plates.push(4);
    plates.push(5);

    plates.push(6);

    std::cout << "Top element: " << plates.top() << std::endl;

    plates.pop();
    plates.pop();

    std::cout << "Top element after popping: " << plates.top() << std::endl;

    return 0;
}
