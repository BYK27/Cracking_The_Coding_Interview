#include "Min_Heap.hpp"

void Min_Heap::bubble_up(int index)
{
    int parent_index = (index - 1) / 2;

    while(index > 0 && heap[index] < heap[parent_index])
    {
        std::swap(heap[index], heap[parent_index]);
        index = parent_index;
    }
}

void Min_Heap::bubble_down(int index)
{
    int child_left = index * 2 + 1;
    int child_right = index * 2 + 2;
    int smallest = index;
    int _size = static_cast<int>(heap.size());

    if(child_left < _size && heap[smallest] > heap[child_left]) smallest = child_left;
    if(child_right < _size && heap[smallest] > heap[child_right]) smallest = child_right;

    if(smallest == index) return;

    std::swap(heap[index], heap[smallest]);
    bubble_up(smallest);
}

void Min_Heap::insert(int data)
{
    this->print_heap();
    heap.push_back(data);
    bubble_up(static_cast<int>(heap.size()) - 1);
}

int Min_Heap::extract_min()
{
    int ret = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    bubble_down(0);
    return ret;
}

void Min_Heap::print_heap()
{
    int _size = static_cast<int>(heap.size());
    for (int i = 0; i < _size; ++i)
    {
        std::cout << heap[i] << " ";
    }
    std::cout << std::endl;
}
