
#include "Graph.hpp"

void Graph::add_edge(int my_node, int your_node)
{
    this->adjacent[my_node].insert(your_node);
}

bool Graph::BFS_path(int start, int end)
{
    std::vector<int> visited(this->vertices_number, false);
    std::vector<int> parent(this->vertices_number, -1);
    std::stack<int> stack;

    stack.push(start);
    visited[start] = true;

    while (!stack.empty())
    {
        int current = stack.top();
        stack.pop();

        if(current == end)
        {
            this->print_path(parent, start, end);
            return true;
        }
        for(int neighbor: this->adjacent[current])
        {
            if(!visited[neighbor])
            {
                visited[neighbor] = true;
                stack.push(neighbor);
                parent[neighbor] = current;
            }
        }
    }
    return false;
}

void Graph::print_path(std::vector<int>& parent, int start, int end)
{
    std::stack<int> ret;
    int current = parent[end];
    while(current != start)
    {
        ret.push(current);
        current = parent[current];
    }

    std::cout << start << "->";

    while(!ret.empty())
    {
        std::cout << ret.top() << "->";
        ret.pop();
    }
    std::cout << end << std::endl;
}
