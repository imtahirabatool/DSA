#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool hasPath(vector<vector<int>> &graph, int src, int dst)
{
    queue<int> q;
    q.push(src);

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        if (current == dst)
        {
            return true;
        }
        for (int neighbor : graph[current])
        {
            q.push(neighbor);
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
// Enter number of nodes: 5
// Enter number of edges: 4
// Enter edges (src, dst) one per line:
// 0 1
// 0 2
// 1 3
// 2 4
// Enter source node: 2
// Enter destination node: 3
// There's no path from 2 to 3