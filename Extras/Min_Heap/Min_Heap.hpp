#ifndef MIN_HEAP_MIN_HEAP_HPP
#define MIN_HEAP_MIN_HEAP_HPP

#include <vector>
#include <iostream>

class Min_Heap
{
private:
    std::vector<int> heap;
    void bubble_up(int index);
    void bubble_down(int index);
public:
    void insert(int data);
    int extract_min();
    inline int get_min(){return heap.empty() ? 0 : heap[0];}
    void print_heap();

};


#endif //MIN_HEAP_MIN_HEAP_HPP
