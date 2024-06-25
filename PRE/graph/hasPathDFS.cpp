#include <iostream>
#include <vector>

using namespace std;

bool hasPath(vector<vector<int>> &graph, int src, int dst)
{
    if (src == dst)
    {
        return true;
    }

    for (int neighbor : graph[src])
    {
        if (hasPath(graph, neighbor, dst))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, e;
    cout << "Enter number of nodes: ";
    cin >> n;
    vector<vector<int>> graph(n);
    cout << "Enter number of edges: ";
    cin >> e;

    cout << "Enter edges (src, dst) one per line:" << endl;
    for (int i = 0; i < e; ++i)
    {
        int src, dst;
        cin >> src >> dst;
        graph[src].push_back(dst);
    }
    int src, dst;
    cout << "Enter source node: ";
    cin >> src;
    cout << "Enter destination node: ";
    cin >> dst;

    if (hasPath(graph, src, dst))
    {
        cout << "There exists a path from " << src << " to " << dst << endl;
    }
    else
    {
        cout << "There's no path from " << src << " to " << dst << endl;
    }
    return 0;
}

// Output:
// Enter number of nodes: 7
// Enter number of edges: 7
// Enter edges (src, dst) one per line:
// 0 1
// 0 2
// 1 3
// 2 6
// 3 4
// Enter source node: 0
// Enter destination node: 6
// There exists a path from 0 to 6