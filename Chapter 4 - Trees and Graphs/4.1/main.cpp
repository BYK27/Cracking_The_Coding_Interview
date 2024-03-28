/*
 Route Between Nodes: Given a directed graph, design an algorithm to find out whether there is a
 route between two nodes.
 */

#include "Graph.hpp"

int main()
{
    Graph graph(10);
    graph.add_edge(0, 1);
    graph.add_edge(0, 2);
    graph.add_edge(0, 3);
    graph.add_edge(1, 4);
    graph.add_edge(1, 5);
    graph.add_edge(2, 3);
    graph.add_edge(3, 6);
    graph.add_edge(3, 7);
    graph.add_edge(4, 8);
    graph.add_edge(5, 9);
    graph.add_edge(6, 8);
    graph.add_edge(7, 9);
    graph.add_edge(8, 9);

    int source = 0;
    int destination = 9;
    if (graph.BFS_path(source, destination)) {
        std::cout << "There is a route between nodes " << source << " and " << destination << std::endl;
    } else {
        std::cout << "There is no route between nodes " << source << " and " << destination << std::endl;
    }

    return 0;
}
