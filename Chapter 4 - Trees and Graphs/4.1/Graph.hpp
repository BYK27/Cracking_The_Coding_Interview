
#ifndef INC_4_1_GRAPH_HPP
#define INC_4_1_GRAPH_HPP

#include <vector>
#include <unordered_set>
#include <stack>
#include <iostream>


class Graph
{
private:
    int vertices_number;
    std::vector<std::unordered_set<int>> adjacent;

    void print_path(std::vector<int>& parent, int start, int end);
public:

    explicit Graph(int v):vertices_number(v)
    {
        adjacent.resize(v);
    }
    void add_edge(int my_node, int your_node);
    bool BFS_path(int start, int end);
};


#endif //INC_4_1_GRAPH_HPP
