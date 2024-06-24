#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>
#include <string>

using namespace std;

// Function to perform Depth-First Search traversal

void depthFirstTraversal(unordered_map<string, vector<string>> &graph, string source)
{
    stack<string> s;
    s.push(source);

    while (!s.empty())
    {
        string current = s.top();
        s.pop();
        cout << current << endl;

        for (string neighbor : graph[current])
        {
            s.push(neighbor);
        }
    }
}
int main()
{
    // Define the graph as an unordered_map 
    unordered_map<string, vector<string>> graph = {
        {"a", {"b", "c"}},
        {"b", {"d"}},
        {"c", {"e"}},
        {"d", {"f"}},
        {"e", {}},
        {"f", {}}};

    // Call the DFS function starting from node 'a'
    depthFirstTraversal(graph, "a");

    return 0;
}


//Output:acebdf