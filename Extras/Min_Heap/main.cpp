#include "Min_Heap.hpp"

int main() {
    Min_Heap heap;

    heap.insert(5);
    heap.insert(3);
    heap.insert(7);
    heap.insert(2);
    heap.insert(1);

    std::cout << "Minimum element: " << heap.extract_min() << std::endl;

    heap.insert(4);

    std::cout << "Minimum element: " << heap.extract_min() << std::endl;

    return 0;
}
